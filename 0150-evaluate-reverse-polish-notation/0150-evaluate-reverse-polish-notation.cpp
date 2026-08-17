class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int value = 0;
        int x = 0;

        while (x < tokens.size()) {
            string s = tokens[x];
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int z = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if (s == "+") {
                    st.push(y + z);
                } else if (s == "-") {
                    st.push(y - z);
                } else if (s == "*") {
                    st.push(y * z);
                } else if (s == "/") {
                    st.push(y / z);
                }

            } else {
                int o = stoi(s);
                st.push(o);
            }
            x++;
        }
        return st.top();
    }
};
