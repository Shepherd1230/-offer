class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> res;
        int left=1, right=2;
        while (right<=(target+1)/2) {
            int sum=add(left, right);
            if (sum<target) {
                right++;
            }
            else if(sum>target)
            {
                left++;
            }
            else
            {
                vector<int> temp;
                for (int i=left; i<=right; i++) {
                    temp.push_back(i);
                }
                res.push_back(temp);
                left++;
            }
        }
        return res;
    }
    
    int add(int left, int right)
    {
        int sum=0;
        for (int i=left; i<=right; i++) {
            sum=sum+i;
        }
        return sum;
    }
};
