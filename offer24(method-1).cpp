// 双指针

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==nullptr) return nullptr;
        ListNode *p=head;
        if (p->next==nullptr) {
            return p;
        }
        ListNode *q=head;
        p=p->next;
        if (p->next==nullptr) {
            q->next=nullptr;
            p->next=q;
            return p;
        }
        
        q->next=nullptr;
        while (p->next!=nullptr) {
            ListNode *r=p->next;
            p->next=q;
            q=p;
            p=r;
        }
        p->next=q;
        return p;
    }
};
