class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if (pushed.size()!=popped.size()) return false;
        stack<int> stk;
        
        int i=0, j=0;
        while (i<popped.size()) {
            if (!stk.empty() && stk.top()==popped[i]) {
                i++;
                stk.pop();
                continue;
            }
            
            
            while (j<pushed.size() && popped[i]!=pushed[j]) {
                stk.push(pushed[j]);
                j++;
            }
            if (j==pushed.size())
            {
                return false;
            }
            else if (popped[i]==pushed[j]) {
                i++;
                j++;
            }
        }
        if (i==popped.size() && stk.empty()) {
            return true;
        }
        else
        {
            return false;
        }
    }
};
