class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root) {
            int left=maxDepth(root->left);
            int right=maxDepth(root->right);
            if (left>right) {
                return left+1;
            }
            else
            {
                return right+1;
            }
        }
        else
        {
            return 0;
        }
    }
};
