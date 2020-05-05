class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        vector<int> path;
        getPath(root, path, sum, ans);
        return ans;
    }
    
    void getPath(TreeNode *root, vector<int> &path, const int &sum, vector<vector<int>> &ans)
    {
        if (root==nullptr) return;
        if (root->left==nullptr && root->right==nullptr)
        {
            path.push_back(root->val);
            int curSum=accumulate(path.begin(), path.end(), 0);
            if (curSum==sum) {
                ans.push_back(path);
                path.pop_back();
                return;
            }
            else
            {
                path.pop_back();
                return;
            }
        }
        else
        {
            path.push_back(root->val);
            getPath(root->left, path, sum, ans);
            getPath(root->right, path, sum, ans);
            path.pop_back();
        }
    }
};
