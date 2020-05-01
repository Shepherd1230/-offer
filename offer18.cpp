class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode *p=head;
        while (p->val!=val) {
            p=p->next;
        }
        if (p->next!=nullptr) {
            ListNode *q=p->next;
            p->val=q->val;
            p->next=q->next;
            // free(q);
            return head;
        }
        else
        {
            ListNode* q=head;
            while (q->next != p) {
                q=q->next;
            }
            q->next=nullptr;
            // free(p);
            return head;
        }
        return head;
    }
};
