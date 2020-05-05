class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root==nullptr) {
            return ans;
        }
        
        TreeNode *p=root;
        queue<TreeNode *> que1, que2;
        que1.push(p);
        vector<int> temp;
        while (!que1.empty() || !que2.empty()) {
            p=que1.front();
            que1.pop();
            temp.push_back(p->val);
            if (p->left!=nullptr) {
                que2.push(p->left);
            }
            if (p->right!=nullptr) {
                que2.push(p->right);
            }
            
            if (que1.empty()) {
                while (!que2.empty()) {

                    que1.push(que2.front());
                    que2.pop();
                }
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
    }
};
