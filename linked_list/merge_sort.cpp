#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
void insert(node **head1,int value)
{
	node *temp=new node();
	temp->data=value;
	temp->next=NULL;
	if(*head1==NULL)
	{
		*head1=temp;
		return;
	}
	node *ptr=*head1;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	return;
}
void print(node *hd)
{
	while(hd!=NULL)
	{
		cout<<hd->data<<" ";
		hd=hd->next;
	}
}
node *middle(node *hd)
{
	int count=0,cnt=0;
	node *t=hd;
	while(hd!=NULL)
	{
		count++;
		hd=hd->next;
	}
	while(t->next!=NULL && cnt<(count/2))
	{
		t=t->next;
		cnt++;
	}
	return t;
}
void split(node *hd1,node **f1,node **s1)
{
//*f1=hd1;
//*s1=middle(hd1)->next;
// middle(hd1)->next=NULL;
//node *x=*hd1;
//while(x!=NULL)
//{
//	x=x->next;
//	}	
//x->next=NULL;
node *fast,*slow;
slow=hd1;
fast=hd1->next;
while(fast!=NULL)
{
fast=fast->next;
if(fast!=NULL)
{
slow=slow->next;
fast=fast->next;	
}	
}
*f1 = hd1;
*s1 = slow->next;
slow->next = NULL; 
 
}
node *merge(node *f,node *s)
{
	node *temp=NULL;
	if(f==NULL)
	return s;
	else if(s==NULL)
	return f;
	if(f->data<=s->data)
	{
		temp=f;
		temp->next=merge(f->next,s);
	}
	else
	{
		temp=s;
		temp->next=merge(f,s->next);
	}
	return temp;
}
void msort(node **hd)
{
	node *h=*hd;
	node *first,*second;
	if(h==NULL || h->next==NULL)
	return;
	split(h,&first,&second);
	msort(&first);
	msort(&second);
	*hd=merge(first,second);
	
	
}
main()
{
	node *head=NULL;
	insert(&head,10);
	insert(&head,5);
	insert(&head,7);
	insert(&head,8);
	insert(&head,1);
	print(head);
	cout<<endl;
	//cout<<middle(head)->data;
	msort(&head);
	print(head);
}
