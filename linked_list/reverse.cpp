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
int middle(node *hd)
{
	int count=0;
	while(hd!=NULL)
	{
		count++;
		hd=hd->next;
	}
//	cout<<count;
	return (count/2);
	
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
	//print(head);
	//reverse(&head);
	//cout<<endl;
	int x=middle(head);
	cout<<x;
	//print(head);
}
