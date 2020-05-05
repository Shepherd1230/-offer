class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1==nullptr) return l2;
        if (l2==nullptr) return l1;
        
        ListNode *p1=l1, *p2=l2, *ans=nullptr, *p=nullptr;
        if (p1->val<p2->val) {
            ans=p1;
            p=p1;
            p1=p1->next;
        }
        else
        {
            ans=p2;
            p=p2;
            p2=p2->next;
        }
        p=ans;
        
        while (p1!=nullptr && p2!=nullptr) {
            if (p1->val<p2->val) {
                p->next=p1;
                p=p1;
                p1=p1->next;
            }
            else
            {
                p->next=p2;
                p=p2;
                p2=p2->next;
            }
        }
        if (p1==nullptr) {
            p->next=p2;
        }
        else
        {
            p->next=p1;
        }
        return ans;
    }
};
