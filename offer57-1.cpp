class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int i=0, j=nums.size()-1;
        while(i<j) {
            if (nums[i]+nums[j]<target) {
                i++;
            }
            else if(nums[i]+nums[j]>target)
            {
                j--;
            }
            else
            {
                res.push_back(nums[i]);
                res.push_back(nums[j]);
                break;
            }
        }
        return res;
    }
};
