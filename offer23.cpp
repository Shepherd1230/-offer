class Solution
{
public:
    ListNode *getIntersection(ListNode *head)
    {
        ListNode *p=nullptr;
        ListNode *step2=head->next, *step1=head;
        int cnt1=1, cnt2=2;
        while (step1!=step2) {
            step2=step2->next->next;
            step1=step1->next;
            cnt1=cnt1+1;
            cnt2=cnt2+2;
        }
        step1=head;
        step2=head;
        for (int i=1; i<=cnt2-cnt1; i++) {
            step2=step2->next;
        }
        
        while (step1!=step2) {
            step2=step2->next;
            step1=step1->next;
        }
        return step1;
    }
};
