class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;
        sort(nums.begin(), nums.end());
        int len = 1, plen = 1;
        for (int x = 1; x < nums.size(); x++) {
            if (nums[x - 1] + 1 == nums[x]) {
                len++;
            } else if (nums[x - 1] == nums[x]) {
                continue;
            } else {
                plen = max(plen, len);
                len = 1;
            }
        }
        plen = max(plen, len);
        return plen;
    }
};