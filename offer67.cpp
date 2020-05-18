// terrible code

class Solution {
public:
    int strToInt(string str) {
        int max=pow(2, 31)-1;
        int min=-pow(2, 31);
        
        
        int sign=1;
        
        int i=0;
        while (i<str.size() && str[i] == ' ') {
            i++;
        }
        if (i==str.size()) return 0;

        
        if (str[i]=='+' || str[i]=='-') {
            if (str[i]=='-') {
                sign=-1;
            }
            i++;
        }
        
        vector<int> nums;
        
        for (; i<str.size(); i++) {
            if (str[i]==' ') {
                break;
            }
            if (str[i]=='0' && nums.size()==0) {
                continue;
            }
            if (str[i]<='9' && str[i]>='0') {
                int temp=str[i]-'0';
                nums.push_back(temp);
            }
            else
            {
                break;
            }
        }
        
        if (nums.size()>12 && sign>0) {
            return max;
        }
        if (nums.size()>12 && sign<0) {
            return min;
        }
        

        if (nums.size()==0) return 0;
        long long value=nums[0];
        for (int j=1; j<nums.size(); j++) {
            value=value*10+nums[j];

        }
        
        value=sign*value;
        if (value<min) {
            return min;
        }
        if (value>max) {
            return max;
        }
        
        return int(value);
    }
};
