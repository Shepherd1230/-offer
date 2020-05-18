// 剑指offer O(n)的复杂度，leetcode最后一个样例过不了
// 1 12500 
// 2 12499 
// 3 25001


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        int idx=majorityElementCore(nums, left, right);
        return nums.at(idx);
    }
    
    int majorityElementCore(vector<int> &nums, int left, int right)
    {
        if (left<0 || right>=nums.size() || right<left) {
            return -1;
        }
        int i=left, j=right;

        int temp=nums.at(i);
        while (i<j) {
            while (j>i && nums.at(j)>temp) {
                j--;
            }
            nums[i]=nums[j];
            while (i<j && nums.at(i)<=temp) {
                i++;
            }
            nums[j]=nums[i];
        }
        nums.at(i)=temp;
        
        if (i==nums.size()/2) {
            return i;
        }
        else if(i>nums.size()/2)
        {
            return majorityElementCore(nums, left, i-1);
        }
        else
        {
            return majorityElementCore(nums, i+1, right);
        }
    }
};
