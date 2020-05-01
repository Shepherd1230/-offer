class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        while (i<j) {
            while (nums[i]%2==1 && i<j) {
                i++;
            }
            while (nums[j]%2==0 && i<j) {
                j--;
            }
            exchangeNums(nums[i], nums[j]);
            i++;
            j--;
        }
        return nums;
    }
    void exchangeNums(int &a, int &b)
    {
        int c=a;
        a=b;
        b=c;
    }
};
