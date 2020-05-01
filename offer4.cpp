class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size()==0) {
            return false;
        }
        for (int i=0, j=matrix[i].size()-1; i<=matrix.size()-1 && j>=0; ) {
            int cur=matrix[i][j];
            if (cur==target) {
                return true;
            }
            if (cur>target) {
                j--;
                continue;
            }
            if (cur<target) {
                i++;
            }
        }
        return false;
    }
};
