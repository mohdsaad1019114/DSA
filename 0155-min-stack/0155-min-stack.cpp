class MinStack {

private:
    std::stack<int> stack;
    std::stack<int> minStack;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        stack.push(value);
        value = min(value, minStack.empty() ? value : minStack.top());
        minStack.push(value);
    }
    
    void pop() {
        stack.pop();
        minStack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */