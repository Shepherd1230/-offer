class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        vector<int> res;
        int value=0;
        for (int i=0; i<nums.size(); i++) {
            value=value^nums[i];
        }
        unsigned p=1;
        while ((value & p)==0) {
            p=p<<1;
        }

        int half1=0, half2=0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] & p) {
                half1=half1^nums[i];
            }
            else
            {
                half2=half2^nums[i];
            }
        }
        res.push_back(half1);
        res.push_back(half2);
        return res;
    }
};
