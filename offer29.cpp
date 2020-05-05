class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.size()==0) return ans;
        
        int left=0, right=matrix[0].size()-1, up=0, down=matrix.size()-1;
        
        while (true) {
            int i=left, j=up;
            for (j=left; j<=right; j++) {
                ans.push_back(matrix[i][j]);
            }
            up++;
            if (up>down) break;
            
            j=right;
            for (i=up; i<=down; i++) {
                ans.push_back(matrix[i][j]);
            }
            right--;
            if (right<left) break;
            
            i=down;
            for (j=right; j>=left; j--) {
                ans.push_back(matrix[i][j]);
            }
            down--;
            if (down<up) break;
            
            j=left;
            for (i=down; i>=up; i--) {
                ans.push_back(matrix[i][j]);
            }
            left++;
            if (left>right) break;
        }
        
        return ans;
    }
};
