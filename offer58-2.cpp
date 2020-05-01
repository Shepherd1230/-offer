class Solution {
public:
    string reverseLeftWords(string s, int n) {
        reverse(s, 0, n-1);
        reverse(s, n, s.size()-1);
        reverse(s, 0, s.size()-1);
        return s;
    }
    void reverse(string &s, int left, int right)
    {
        while (left<right) {
            char c=s[left];
            s[left]=s[right];
            s[right]=c;
            left++;
            right--;
        }
    }
};
