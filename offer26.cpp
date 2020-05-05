class Solution {
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (B==nullptr) {
            return true;
        }
        stack<TreeNode*> stk;
        TreeNode *p=A;
        
        while (p!=nullptr || !stk.empty()) {
            while (p!=nullptr) {
                stk.push(p);
                p=p->left;
            }
            p=stk.top();
            stk.pop();

            if (p->val==B->val) {
                if (isSubStructureCore(p, B)) {
                    return true;
                }
            }
            
            p=p->right;
        }
        return false;
    }
    
    bool isSubStructureCore(TreeNode* root1, TreeNode* root2)
    {
        if ( root2==nullptr ) return true;
        if ( root2!=nullptr && root1==nullptr ) return false;
        if (root1->val != root2->val) return false;
        bool left=isSubStructureCore(root1->left, root2->left);
        bool right=isSubStructureCore(root1->right, root2->right);
        if (left && right) {
            return true;
        }
        else
        {
            return false;
        }
    }
};
