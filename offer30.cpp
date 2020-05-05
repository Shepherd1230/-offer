class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> stk;
    stack<int> minStk;
    MinStack() {

    }
    
    void push(int x) {
        stk.push(x);
        if (minStk.empty()) {
            minStk.push(x);
        }
        else
        {
            if (x<minStk.top()) {
                minStk.push(x);
            }
            else
            {
                minStk.push(minStk.top());
            }
        }
    }
    
    void pop() {
        stk.pop();
        minStk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int min() {
        return minStk.top();
    }
};
