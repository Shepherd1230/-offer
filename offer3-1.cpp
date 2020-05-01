class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int ans=0;
        for (int i=0; i<nums.size(); ) {
            while (i!=nums[i]) {
                if (nums[i]!=nums[nums[i]]) {
                    exchange(nums[i], nums[nums[i]]);
                }
                else
                {
                    return nums[i];
                }
                
            }
            i++;
            
        }
        return ans;
    }
    
    void exchange(int &a, int &b)
    {
        int c=a;
        a=b;
        b=c;
    }
};
