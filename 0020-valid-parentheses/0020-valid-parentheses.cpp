class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 1)
            return false;
        stack<char> st;

        for (char ch : s) {
            if (ch == ')' && !st.empty() && st.top() == '(') {
                st.pop();
            } else if (ch == '}' && !st.empty() && st.top() == '{') {
                st.pop();
            } else if (ch == ']' && !st.empty() && st.top() == '[') {
                st.pop();
            } else {
                st.push(ch);
            }
        }
        return st.empty();
    }
};