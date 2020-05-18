// 投票法

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote=0, curNum=nums[0];
        
        for (int i=0; i<nums.size(); i++) {
            if (vote==0) {
                curNum=nums[i];
                vote++;
                continue;
            }
            else
            {
                if (curNum==nums[i]) {
                    vote++;
                }
                else
                {
                    vote--;
                }
            }
        }
        return curNum;
    }
};
