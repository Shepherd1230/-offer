
class Solution
{
public:
    int findDuplicate(vector<int>nums)
    {
        int n=nums.size()-1;
        int left=1, right=n;
        
        while (true) {
            if (nums[left]==nums[right]) {
                return nums[left];
            }
            
            int mid=(left+right)/2;
            int leftCnt=countRange(nums, left, mid);
            int rightCnt=countRange(nums, mid+1, right);
            
            if (leftCnt>(mid-left+1)) {
                right=mid;
            }
            else
            {
                left=mid;
            }
            
        }
        return 0;
    }
    
    
    int countRange(vector<int> nums, int left, int right)
    {
        int ans=0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i]>=left && nums[i]<=right) {
                ans++;
            }
        }
        return ans;
    }
};
