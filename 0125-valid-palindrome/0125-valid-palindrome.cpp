class Solution {
public:
    bool isPalindrome(string s) {
        string p = "";
        for (char ch : s) {
            if (isalnum(ch)) {
                p.push_back(tolower(ch));
            }
        }
        s = p;
        reverse(p.begin(), p.end());
        return s == p;
    }
};