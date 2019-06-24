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
	node *head1=NULL;
	insert(&head1,1);
	insert(&head1,2);
	insert(&head1,3);
	insert(&head1,4);
	insert(&head1,5);
	print(head1);
	node *crnt=head1->next;
	delete1(&head1,crnt->data);
	print(head1);
}
