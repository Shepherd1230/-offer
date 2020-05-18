class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& nums, int k) {
        vector<int> ans;
        if (k==0) {
            return ans;
        }
        int left=0, right=nums.size()-1;
        getLeastNumbersCore(nums, k, left, right);
        
        for (int i=0; i<k; i++) {
            ans.push_back(nums[i]);
        }
        return ans;
    }
    
    void PrintVec(vector<int> &nums)
    {
        for (int i=0; i<nums.size(); i++) {
            cout<<nums[i]<<"\t";
        }
        cout<<endl;
    }
    
    int getLeastNumbersCore(vector<int> &nums, int k, int left, int right)
    {
        int i=left, j=right;
        
        int temp=nums.at(i);
        
        while (i<j) {
            while (i<j && nums.at(j)>temp) {
                j--;
            }
            nums.at(i)=nums.at(j);
            
            
            while (i<j && nums.at(i)<=temp) {
                i++;
            }
            nums.at(j)=nums.at(i);
        }
        nums.at(i)=temp;
        
        if (i==k-1) {
            return i;
        }
        else if(i<k-1)
        {
            return getLeastNumbersCore(nums, k, i+1, right);
        }
        else
        {
            return getLeastNumbersCore(nums, k, left, i-1);
        }
    }
};
