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
	cout<<endl;
}
reverse(node **head1)
{
	node *current=*head1;
	node *prev=NULL;
	node *right=(*head1)->next;
	while(current!=NULL)
	{
		right=current->next;
		current->next=prev;
		prev=current;
		current=right;
	}
	*head1=prev;
}
int max(node *hd)
{
	int t=hd->data;
	while(hd->next!=NULL)
	{
		if((hd->next)->data>t)
		t=(hd->next)->data;
		hd=hd->next;
	}
	return t;
	
}
main()
{
	node *head1=NULL;
	node *head2=NULL;
	insert(&head1,12);
	insert(&head1,15);
	insert(&head1,10);
	insert(&head1,11);
	insert(&head1,5);
	insert(&head1,6);
	insert(&head1,2);
	insert(&head1,3);
	print(head1);
	reverse(&head1);
	print(head1);
	node *current=head1;
	while(head1->next!=NULL)
	{
	
	
	int temp=max(current->next);
	//cout<<temp;
	if(current->data>temp)
	{
		insert(&head2,current->data);
	}
	current=current->next;
	head1=head1->next;
	}
	insert(&head2,head1->data);
	print(head2);
}
