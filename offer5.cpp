class Solution {
public:
    string replaceSpace(string s) {
        int cnt=0;
        for (int i=0; i<s.size(); i++) {
            if (s[i]==' ') {
                cnt++;
            }
        }
        
        string ans(s);
        for (int i=0; i<cnt; i++) {
            ans=ans+"00";
        }
        for (int i=s.size()-1, j=ans.size()-1; i>=0 && j>=0; i--) {
            if (s[i]==' ') {
                ans[j--]='0';
                ans[j--]='2';
                ans[j--]='%';

            }
            else
            {
                ans[j]=ans[i];
                j--;
            }
        }
        return ans;
    }
};
