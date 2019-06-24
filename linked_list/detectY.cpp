#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		int flag;
		node *next;
};
void insert(node **head1,int value)
{
	node *temp=new node();
	temp->data=value;
	temp->flag=0;
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
void traverse(node *hd)
{
	while(hd!=NULL)
	{
		hd->flag=1;
		hd=hd->next;
	}
}
void check(node *hd)
{
	while(hd!=NULL)
	{
		if(hd->flag==1)
		{
		
		cout<<"Y exist at:"<<hd->data;
		return;
		}
		hd=hd->next;
	}
	cout<<"Y not exist";
}
main()
{
	node *head1=NULL;
	node *head2=NULL;
	insert(&head1,10);
	insert(&head1,20);
	insert(&head1,30);
	insert(&head1,130);
	insert(&head1,13);
	insert(&head2,5);
	insert(&head2,8);
	head2->next->next=head1->next->next->next;
	print(head1);
	cout<<endl;
	print(head2);
	traverse(head1);
	cout<<endl;
	check(head2);
	
	
}
