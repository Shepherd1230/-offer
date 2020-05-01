class Solution {
public:
    int cuttingRope(int n) {
        if (n<2)  return 0;
        if (n==2) return 1;
        if (n==3) return 2;
        
        long long ans=1;
        while (n>4) {
            ans=(ans*3)%1000000007;
            n=n-3;
        }
        cout<<n<<endl;
        if (n==4) {
            ans=(ans*2)%1000000007;
            ans=(ans*2)%1000000007;
        }
        else if(n==3)
        {
            ans=(ans*3)%1000000007;
        }
        else
        {
            ans=(ans*2)%1000000007;
        }
        
        return ans;
    }
};
