class CQueue {
public:
    stack<int> inputStk;
    stack<int> outputStk;
    
    CQueue() {
    }
    
    void appendTail(int value) {
        while (!outputStk.empty()) {
            inputStk.push(outputStk.top());
            outputStk.pop();
        }
        inputStk.push(value);
    }
    
    int deleteHead() {
        while (!inputStk.empty()) {
            outputStk.push(inputStk.top());
            inputStk.pop();
        }
        if (outputStk.empty()) {
            return -1;
        }
        int val=outputStk.top();
        outputStk.pop();
        return val;
    }
};
