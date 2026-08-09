class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s == "") {
            return 0;
        }
    
        string freq = "";
        int x = 0, y = 0, len = 0, prev = 1;
        while (y < s.size()) {
            if (freq.find(s[y]) == string::npos) {
                freq.push_back(s[y]);
                y++;
                len++;
            } else {
                if (len > prev) {
                    prev = len;
                }
                len --;;
                x++;
                freq.erase(0, 1);
            }
        }
        return max(prev, len);
    }
};