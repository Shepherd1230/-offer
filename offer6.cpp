class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        stack<int> stk;
        vector<int> ans;
        ListNode *p=head;
        while (p) {
            stk.push(p->val);
            p=p->next;
        }
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        
        return ans;
    }
};
