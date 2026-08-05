class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int, int>> ans;
        for (int num : nums) {
            mp[num]++;
        }
        for (auto it : mp) {
            ans.push_back({it.second, it.first});
        }
        sort(ans.rbegin(), ans.rend());
        vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(ans[i].second);
        }
        return result;
    }
};