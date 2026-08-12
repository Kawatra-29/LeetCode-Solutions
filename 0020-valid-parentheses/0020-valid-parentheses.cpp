class Solution {
public:
    bool isValid(string s) {
        stack<char> para;
        for(char c:s){
            if (c=='('||c=='{'||c=='['){
                para.push(c);
            }
            else if (c==')'||c=='}'||c==']'){
                if (para.empty()==true) return false;
                else if(c==')'&& para.top()=='(') para.pop();
                else if(c=='}'&& para.top()=='{') para.pop();
                else if(c==']'&& para.top()=='[') para.pop();
                else return false;
            }
        }
        return para.empty();
    }
};