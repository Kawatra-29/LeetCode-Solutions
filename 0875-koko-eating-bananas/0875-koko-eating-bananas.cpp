class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int right = *max_element(piles.begin(), piles.end());
        int left = 1;
        int ans = 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long hours = 0;
            for (int x = 0; x < piles.size(); x++) {
                hours += (long long)(piles[x] + mid - 1) / mid;
            }
            if (hours <= h) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }
};