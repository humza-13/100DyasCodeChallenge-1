class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        
        for(int i = 0; i < s.length(); i++){
            
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                sk.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(sk.empty() || (sk.top() == '(' && s[i] != ')') || (sk.top() == '{' && s[i] != '}') || (sk.top() == '[' && s[i] != ']'))
                    return false;
                sk.pop();
            }
            
        }
        return sk.empty();
    }
};
