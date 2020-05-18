class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size()==0) return 0;
        
        int i=0, j=0, maxVal=nums.at(0), curVal=0;
        while (j<nums.size()) {
            if (curVal<0) {
                i=j;
                curVal=0;
            }
            else
            {
                curVal=curVal+nums[j];
                j++;
                if (curVal>maxVal) {
                    maxVal=curVal;
                }
            }
        }
        return maxVal;
    }
};
