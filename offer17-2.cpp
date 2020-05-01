// recursive 递归的方式
class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> nums;
        nums.assign(n, 0);
        recursiveSet(nums, 0);
        return nums;
    }
    
    void recursiveSet(vector<int> &nums, int idx)
    {
        if (idx==nums.size()) {
            printNums(nums);
            return;
        }
        else
        {
            for (int i=0; i<=9; i++) {
                nums[idx]=i;
                recursiveSet(nums, idx+1);
            }
        }
    }
    
    void printNums(const vector<int> &nums)
    {
        int i=0;
        while (i<nums.size() && nums[i]==0) {
            i++;
        }
        while (i<nums.size()) {
            cout<<nums[i];
            i++;
        }
        cout<<endl;
    }
};
