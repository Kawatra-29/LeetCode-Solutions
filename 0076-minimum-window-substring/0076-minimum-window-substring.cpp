class Solution {
public:
    string minWindow(string s, string t) {

        if (s.size() < t.size())
            return "";

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        for (char c : t) {
            need[c]++;
        }

        int left = 0;
        int have = 0;
        int required = need.size();

        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            char c = s[right];
            window[c]++;

            // Is character ki required frequency complete hui?
            if (need.count(c) && window[c] == need[c]) {
                have++;
            }

            // Current window valid hai
            while (have == required) {

                // Minimum window update karo
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // Left character remove karo
                char leftChar = s[left];
                window[leftChar]--;

                if (need.count(leftChar) &&
                    window[leftChar] < need[leftChar]) {
                    have--;
                }

                left++;
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};