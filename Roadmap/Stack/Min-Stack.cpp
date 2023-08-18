class MinStack {
public:
    stack<int> nums;
    stack<int> mins;

    MinStack() {
        
    }
    
    void push(int val) {
        if(!nums.empty())
        {
            nums.push(val);
            val < mins.top() ?  mins.push(val) : mins.push(mins.top());
        }
        else
        {
            nums.push(val);
            mins.push(val);
        }
    }
    
    void pop() {
        nums.pop();
        mins.pop();
    }
    
    int top() {
        return nums.top();
    }
    
    int getMin() {
        return mins.top();
    }
};