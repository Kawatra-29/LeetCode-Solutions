class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> left(nums.size());
        vector<int> right(nums.size());
        int x = 0, y;
        left[x] = 1;
        x++;
        while (x < nums.size()) {
            left[x] = left[x - 1] * nums[x - 1];
            x++;
        }
        y = nums.size()-1;
        right[y] = 1;
        y--;
        while (y >= 0) {
            right[y] = right[y + 1] * nums[y + 1];
            y--;
        }
        x=0;
        while (x < nums.size())
        {
            left[x]=left[x]*right[x];
            x++;
        }

        return left;
    }
};