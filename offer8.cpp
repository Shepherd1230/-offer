class Solution
{
public:
    TreeNode* getNext(TreeNode *root,TreeNode *p)
    {
        TreeNode* ptr=root;
        stack<TreeNode*> stk;
        bool tag=0;
        stack<TreeNode*> ans;
        while (ptr || !stk.empty()) {
            while (ptr) {
                stk.push(ptr);
                ptr=ptr->left;
            }
            ptr=stk.top();
            stk.pop();
            
            if (ptr==p) {
                tag=true;
            }
            if (tag) {
                ans.push(ptr);
                if (ans.size()>1) {
                    return ans.top();
                }
            }
            ptr=ptr->right;
        }
        return nullptr;
    }
};
