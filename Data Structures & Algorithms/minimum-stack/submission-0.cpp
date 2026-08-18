class MinStack {
public:
    std::stack<int> main; 
    std::stack<int> minStk; 
    MinStack() {
    }
    
    void push(int val) {
        main.push(val);
        if(minStk.empty()){
            minStk.push(val);
        }
        else if(val <= minStk.top()){
            minStk.push(val); 
        }
    }
    
    void pop() { 
        if(main.top() == minStk.top()){
            minStk.pop();
        }
        main.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return minStk.top(); 
    }
};
