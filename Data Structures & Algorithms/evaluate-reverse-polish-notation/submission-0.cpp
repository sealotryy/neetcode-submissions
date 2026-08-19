class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> pool; 
        std::stack<int> results;
        for(string nums: tokens){
            if (nums == "+"){
                int right = pool.top();
                pool.pop(); // popping doesnt return a value so we need top
                int left = pool.top();
                pool.pop();
                int result = right + left; 
                pool.push(result); 
            }
            else if(nums == "*"){
                int right = pool.top();
                pool.pop(); // popping doesnt return a value so we need top
                int left = pool.top();
                pool.pop();
                int result = right * left; 
                pool.push(result); 
            }
            else if(nums == "-"){
                int right = pool.top();
                pool.pop(); // popping doesnt return a value so we need top
                int left = pool.top();
                pool.pop();
                int result = left - right; 
                pool.push(result); 
            }
            else if(nums == "/"){
                int right = pool.top();
                pool.pop(); // popping doesnt return a value so we need top
                int left = pool.top();
                pool.pop();
                int result = left / right; 
                pool.push(result); 
            }
            else{
                pool.push(std::stoi(nums));
            }
            
        }
        return pool.top(); 
    }
};
