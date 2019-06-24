#include<bits/stdc++.h>
using namespace std;
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
void maxlist(node *hd1,node *hd2,node *hd3)
{
	while(hd1!=NULL)
	{
		hd3=new node();
		if(hd1>=hd2)
		{
			hd3->data=hd1->data;
		}
		else
		{
			hd3->data=hd2->data;
		}
		hd3=hd3->next;
		hd1=hd1->next;
		hd2=hd2->next;
	}
}
main()
{
	node *head1=NULL;
	node *head2=NULL;
	insert(&head1,10);
	insert(&head1,5);
	insert(&head1,20);
	insert(&head1,30);
	insert(&head2,40);
	insert(&head2,15);
	insert(&head2,2);
	insert(&head2,3);
	print(head1);
	print(head2);
	node *head3=NULL;
	maxlist(head1,head2,head3);
	print(head3);
}
