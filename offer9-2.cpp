class CStack
{
public:
    queue<int> que1, que2;
    CStack(){
    }
    
    void pushStack(int value)
    {
        while (!que2.empty()) {
            que1.push(que2.front());
            que2.pop();
        }
        que1.push(value);
    }
    
    int deleteStack()
    {
        while (!que2.empty()) {
            que1.push(que2.front());
            que2.pop();
        }
        if (que1.empty()) {
            return -1;
        }
        while (que1.size()>1) {
            que2.push(que1.front());
            que1.pop();
        }
        int value=que1.front();
        que1.pop();
        return value;
    }
};
