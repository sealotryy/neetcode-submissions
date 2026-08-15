class Solution {
public:
    bool isValid(string s) {
        // this problem requires a LIFO approach (stack)
        std::stack<char> chars; 
        
        for (int i = 0; i < s.size(); i++){
            // we want to push to the stack if it fits the last character correctly
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                chars.push(s[i]); 
            }
            
            if(s[i] == ']'){
                if(!chars.empty() && chars.top() == '['){
                    chars.pop();
                }
                else{
                    return false; 
                }
            }
            if(s[i] == ')'){
                if(!chars.empty() && chars.top() == '('){
                    chars.pop();
                }
                else{
                    return false; 
                }
            }
            if(s[i] == '}'){
                if(!chars.empty() && chars.top() == '{'){
                    chars.pop();
                }
                else{
                    return false; 
                }
            }
        }
        return chars.empty(); 
        
    }
};
