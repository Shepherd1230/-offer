class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        vector<int> ans;
        if (root==nullptr) {
            return ans;
        }
        
        queue<TreeNode*>que;
        TreeNode *p=root;
        que.push(root);

        while (!que.empty()) {
            p=que.front();
            que.pop();
//            cout<<p->val;
            ans.push_back(p->val);
            if (p->left) {
                que.push(p->left);
            }
            if (p->right) {
                que.push(p->right);
            }
        }
        return ans;
    }
};
