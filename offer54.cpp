class Solution {
public:
    int kthLargest(TreeNode* root, int k) {
        if (k<=0) {
            return -1;
        }
        stack<TreeNode *> stk;
        TreeNode *p=root;
        int cnt=0;
        while (p || !stk.empty()) {
            while (p) {
                stk.push(p);
                p=p->right;
            }
            p=stk.top();
            stk.pop();
            cnt++;
            if (cnt==k) {
                return p->val;
            }
            p=p->left;
        }
        return -1;
    }
};
