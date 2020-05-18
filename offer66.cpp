class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        vector<int> ans;
        if (a.size()==0) {
            return ans;
        }
        
        int sum=1;
        deque<int> dq1;
        dq1.push_back(sum);
        for (int i=0; i<a.size()-1; i++) {
            sum=sum*a[i];
            dq1.push_back(sum);
        }
        
        sum=1;
        deque<int> dq2;
        dq2.push_front(sum);
        for (int i=a.size()-1; i>0; i--) {
            sum=sum*a[i];
            dq2.push_front(sum);
        }
        
        while ( !dq1.empty() && !dq2.empty()) {
            int temp=dq1.front()*dq2.front();
            dq1.pop_front();
            dq2.pop_front();
            ans.push_back(temp);
        }
        return ans;
    }
};
