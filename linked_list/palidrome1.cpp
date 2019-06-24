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
int cnt(node *hd)
{
	int count=0;
	while(hd!=NULL)
	{
		count++;
		hd=hd->next;
	}
	return count;
}
int findknode(node *hd,int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		hd=hd->next;
	}
	return (hd->data);
}
void palindrome(node *head)
{
	int beg=0;
	int end=cnt(head);
	while(beg<end)
	{
		if(findknode(head,beg)!=findknode(head,end-1))
		{
			cout<<"not palindrome";
			return;
		}
		beg++;
		end--;
	}
	cout<<"palindrome";
	
}
main()
{
	node *head=NULL;
	insert(&head,10);
	insert(&head,5);
	insert(&head,20);
	insert(&head,5);
	insert(&head,10);
	print(head);
	palindrome(head);
}
