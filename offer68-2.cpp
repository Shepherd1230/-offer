class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root==nullptr) return nullptr;
        if (root==p || root==q) return root;

        
        TreeNode *left=lowestCommonAncestor(root->left, p, q);
        TreeNode *right=lowestCommonAncestor(root->right, p, q);
        if (left!=nullptr && right!=nullptr) {
            return root;
        }
        else if(left==nullptr && right!=nullptr)
        {
            return right;
        }
        else if(left!=nullptr && right==nullptr)
        {
            return left;
        }
        else
        {
            return nullptr;
        }
        
        return nullptr;
    }
};
