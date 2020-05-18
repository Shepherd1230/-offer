class Solution {
public:
    int countDigitOne(int n) {
        if(n==0) return 0;
        if (n>=1 && n<=9) return 1;
        
        int temp=n, pow=1, high=0, last=0;
        
        while (temp>=10) {
            temp=temp/10;
            pow=pow*10;
            high=temp;
        }
        high=temp;
        last=n-high*pow;
        
        if (high==1) {
            return countDigitOne(pow-1)+countDigitOne(last)+last+1;
        }
        else
        {
            return countDigitOne(pow-1)*high+pow+countDigitOne(last);
        }
    }
};
