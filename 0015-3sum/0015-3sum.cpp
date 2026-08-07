class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if (nums.size() < 3)
            return ans;
        sort(nums.begin(), nums.end());
        int left = 0, middle = 1, right = nums.size() - 1;

        while (left < nums.size() - 2) {
            if (left > 0 && nums[left] == nums[left - 1]) {
                left++;
                middle = left + 1;
                right = nums.size() - 1;
                continue;
            }
            while (middle < right) {

                if (nums[left] + nums[middle] + nums[right] == 0) {
                    ans.push_back({nums[left], nums[middle], nums[right]});
                    middle++;
                    right--;
                    while (middle < right && nums[middle] == nums[middle - 1]) {
                        middle++;
                    }
                    while (middle < right && nums[right] == nums[right + 1]) {
                        right--;
                    }

                } else if (nums[left] + nums[middle] + nums[right] > 0) {
                    right--;
                } else {
                    middle++;
                }
            }
            left++;
            middle = left + 1;
            right = nums.size() - 1;
        }
        return ans;
    }
};