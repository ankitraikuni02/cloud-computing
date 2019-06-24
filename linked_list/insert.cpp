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
insert_front(node **head1,int value)
{
	node *temp=new node();
	temp->data=value;
	temp->next=*head1;
	*head1=temp;
}
void insert_after(node *pv,int value)
{
	node *temp=new node();
	temp->data=value;
	temp->next=pv->next;
	pv->next=temp;
}
void delete1(node **head1,int key)
{
	node *temp=*head1;
	if(temp==NULL)
	{
		cout<<"linked list is empty";
		return;
		}	
	node *prev=temp;
	while(temp->data!=key || temp==NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
		cout<<"item not found";
		return;
	}
	prev->next=temp->next;
	delete(temp);
	return;
}

main()
{
	node *head=NULL;
	//int value;
	//cin>>value;
	insert(&head,10);
	insert(&head,5);
	insert(&head,20);
	insert(&head,30);
	insert_front(&head,40);
	insert_after(head->next->next,89);
	delete1(&head,20);
	print(head);
	
}
