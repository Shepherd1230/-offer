class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root==nullptr) return ans;
        TreeNode *p=nullptr;
        int level=1;
        
        queue<TreeNode *>que;
        que.push(root);
        stack<TreeNode *>stk;
        vector<int> temp;
        
        while (!que.empty() || !stk.empty()) {
            p=que.front();
            que.pop();
            temp.push_back(p->val);
            if (level%2==1) {
                if (p->left) {
                    stk.push(p->left);
                }
                if (p->right) {
                    stk.push(p->right);
                }
            }
            else
            {
                if (p->right) {
                    stk.push(p->right);
                }
                if (p->left) {
                    stk.push(p->left);
                }
            }

            if (que.empty()) {
                while (!stk.empty()) {
                    que.push(stk.top());
                    stk.pop();
                }
                ans.push_back(temp);
                temp.clear();
                level++;
            }
        }
        return ans;
    }
};
