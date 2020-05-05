
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head==nullptr) return nullptr;
        if (head->next==nullptr) {
            Node *head2=new Node(head->val);
            
            if (head->random==nullptr) {
                head2->random==nullptr;
            }
            else
            {
                head2->random=head2;
            }
            return head2;
            
        }
        
        Node *p=head;
        while (p!=nullptr) {
            Node *q=new Node(p->val);
            q->next=p->next;
            p->next=q;
            p=q->next;
        }
        
        p=head;
        while (p) {
            if (p->random==nullptr) {
                p->next->random=nullptr;
            }
            else
            {
                p->next->random=p->random->next;
            }
            p=p->next->next;
        }
        
        
        Node *head2=head->next;
        Node *q=head2;
        p=head;
        
        while (true) {
            p->next=q->next;
            p=p->next;
            q->next=p->next;
            q=q->next;
            
            if (q->next==nullptr) {
                break;
            }
        }
        p->next=nullptr;
        
        return head2;
    }
};
