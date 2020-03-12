#include<iostream>
#include<vector>
#include<stack>

using namespace std;
typedef struct LNode
{
	int data;
	LNode *next;
}*List;


void initial(List &head, vector<int> a)
{
	head=(List)malloc(sizeof(LNode));
	List p=head;
	p->data=a[0];
	p->next=NULL;
	
	for(int i=1; i<a.size(); i++)
	{
		List q=(List)malloc(sizeof(LNode));
		q->data=a[i];
		q->next=NULL;
		p->next=q;
		p=q;
	}
	return;
}

void inverseList_1(List &head)
{
	List p,q,l;
	p=head;
	q=p->next;
	l=q->next;
	
	p->next=NULL;
	
	while(l->next!=NULL)
	{
		q->next=p;
		p=q;
		q=l;
		l=l->next;		
	}	
	q->next=p;
	l->next=q;
	head=l;
	return;
}

void printList(List head)
{
	List p=head;
	while(p->next != NULL)
	{
		cout<<p->data<<"\t";
		p=p->next;
	}
	cout<<p->data<<endl;
}


void inverseList_2(List head)
{
	
	stack<int> stk;
	List p=head;
	while(p->next!=NULL)
	{
		stk.push(p->data);
		p=p->next;
	}
	stk.push(p->data);
	
	while(!stk.empty())
	{
		cout<<stk.top()<<"\t";
		stk.pop();
	}
		
	return;
}


int main()
{
	List head;
	vector<int> a={1,2,3,10,14,16,19,23,27};
	initial(head, a);
	
	List p=head;
	printList(head);	
	/*
	cout<<"first time:"<<endl;
	inverseList_1(head);
	printList(head);	
	*/
	cout<<"second time:"<<endl;
	inverseList_2(head);
	
	
	
	
	return 0;
}
