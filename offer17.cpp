class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> nums;
        nums.assign(n, 0);
        
        while (true) {
            int takeOver=1;
            for (int i=nums.size()-1; i>=0; i--) {
                nums[i]=nums[i]+takeOver;
                if (nums[i]>9) {
                    nums[i]=nums[i]-10;
                    takeOver=1;
                }
                else
                {
                    takeOver=0;
                }
            }
            printNums(nums);
            if (takeOver) {
                break;
            }
        }
        return nums;
    }
    void printNums(const vector<int> &nums)
    {
        int i=0;
        while (i<nums.size() && nums[i]==0) {
            i++;
        }
        if (i==nums.size()) {
            return;
        }
        for (; i<nums.size(); i++) {
            cout<<nums[i];
        }
        cout<<endl;
    }
};
