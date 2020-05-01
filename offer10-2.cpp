class Solution {
public:
    int numWays(int n) {
        if (n==0) return 1;
        if (n==1) return 1;
        if (n==2) return 2;
        
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        ans.push_back(2);
        
        for (int i=3; i<=n; i++) {
            ans.push_back((ans[i-1]+ans[i-2])%1000000007);
        }
        return ans.back();
    }
};
