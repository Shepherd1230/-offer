class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int depth;
        return isBalancedCore(root, depth);
    }
    
    bool isBalancedCore(TreeNode* root, int &depth)
    {
        if (root==nullptr){
            depth=0;
            return true;
        }
        else {
            int leftDepth, rightDepth;
            bool leftBlance=isBalancedCore(root->left, leftDepth);
            bool rightBlance=isBalancedCore(root->right, rightDepth);
            
            if (leftDepth>rightDepth) {
                depth=leftDepth+1;
            }
            else
            {
                depth=rightDepth+1;
            }
            
            
            if (leftBlance && rightBlance) {
                int diff=leftDepth-rightDepth;
                if (diff<=1 && diff>=-1) {
                    return true;
                }
            }
            return false;
        }
    }
};
