class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if (head==nullptr) return nullptr;
        
        ListNode* p=head;
        int cnt=1;

        while (cnt<k) {
            cnt++;
            if (p==nullptr) {
                return nullptr;
            }
            p=p->next;
        }
        
        ListNode*q=head;
        while (p->next!=nullptr) {
            p=p->next;
            q=q->next;
        }
        return q;
    }
};
