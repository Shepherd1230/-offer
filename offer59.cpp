class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> maxValue;
        deque<int> idxQue;
        
        
        for (int i=0; i<k; i++) {
            while (!idxQue.empty() && nums[idxQue.back()]<nums[i]) {
                idxQue.pop_back();
            }
            idxQue.push_back(i);
        }
        
        for (int i=k; i<nums.size(); i++) {
            maxValue.push_back(nums[idxQue.front()]);
            if (i-idxQue.front()+1>k) {
                idxQue.pop_front();
            }
            if (idxQue.empty()) {
                idxQue.push_back(i);
            }
            else
            {
                while (!idxQue.empty() && nums[i]>nums[idxQue.back()]) {
                    idxQue.pop_back();
                }
                idxQue.push_back(i);
            }
            
        }
        maxValue.push_back(nums[idxQue.front()]);
        return maxValue;
    }
};
