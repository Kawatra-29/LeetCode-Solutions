class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;

        int x = 0, y = numbers.size() - 1;
        while (x < y) {
            if (numbers[x] + numbers[y] == target) {
                return {x + 1, y + 1};
            } else if (numbers[x] + numbers[y] > target) {
                y--;
            } else {
                x++;
            }
        }

        return {};
    }
};