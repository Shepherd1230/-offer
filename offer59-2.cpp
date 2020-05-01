class MaxQueue {
public:
    queue<int>que;
    deque<int>maxQue;
    
    MaxQueue() {
    }
    
    int max_value() {
        if (maxQue.empty()) {
            return -1;
        }
        else
        {
            return maxQue.front();
        }
    }
    
    void push_back(int value) {
        que.push(value);
        while (!maxQue.empty() && maxQue.back()<value) {
            maxQue.pop_back();
        }
        maxQue.push_back(value);
    }
    
    int pop_front() {
        if (que.empty()) {
            return -1;
        }
        else
        {
            int retValue=que.front();
            que.pop();
            if (maxQue.front()==retValue) {
                maxQue.pop_front();
            }
            return retValue;
        }
    }
};
