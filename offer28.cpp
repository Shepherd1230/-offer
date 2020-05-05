class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root==nullptr) return true;
        return isSymmetricCore(root->left, root->right);
    }
    
    bool isSymmetricCore(TreeNode* root1, TreeNode* root2)
    {
        if (root1==nullptr && root2==nullptr) return true;
        if ((root1==nullptr && root2!=nullptr) || (root1!=nullptr && root2==nullptr)) return false;
        if (root1->val != root2->val) return false;
        
        bool outside=isSymmetricCore(root1->left, root2->right);
        bool inside=isSymmetricCore(root1->right, root2->left);
        return (outside && inside);
    }
};
