class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size()==0) {
            return 0;
        }
        int first=getFirst(nums, target, 0, nums.size()-1);
        int last=getLast(nums, target, 0, nums.size()-1);
        
        if (first==-1 || last==-1) {
            return 0;
        }
        
        return last-first+1;
        return 0;
    }
    
    int getFirst(vector<int> nums, int target, int left, int right)
    {
        if (left>right) {
            return -1;
        }
        
        int mid=(left+right)/2;
        if (nums[mid]>target) {
            return getFirst(nums, target, left, mid-1);
        }
        else if(nums[mid]<target)
        {
            return getFirst(nums, target, mid+1, right);
        }
        else
        {
            if((mid==0) || (mid>0 && nums[mid-1]!=target))
            {
                return mid;
            }
            else
            {
                return getFirst(nums, target, left, mid-1);
            }
        }
    }
    
    int getLast(vector<int> nums, int target, int left, int right)
    {
        if (left>right) {
            return -1;
        }
        int mid=(left+right)/2;
        if (nums[mid]>target) {
            return getLast(nums, target, left, mid-1);
        }
        else if(nums[mid]<target)
        {
            return getLast(nums, target, mid+1, right);
        }
        else
        {
            if ((mid==nums.size()-1) || (nums[mid]==target && nums[mid+1]!=target)) {
                return mid;
            }
            else
            {
                return getLast(nums, target, mid+1, right);
            }
        }
    }
};

