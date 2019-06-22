<<<<<<< HEAD
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
node *addlist(node *hd1,node *hd2)
{
	
	node *newlist=NULL;
	int carry=0,sum;
	while((hd1!=NULL)|| (hd2!=NULL))
	{
		sum=carry+(hd1?hd1->data:0)+(hd2?hd2->data:0);
		carry=sum/10;
		sum=sum%10;
		insert(&newlist,sum);


	 	if(hd1!=NULL)	
		    hd1=hd1->next;
		if(hd2!=NULL)
		    hd2=hd2->next;
		
	}
	if(carry>0)
	{
		insert(&newlist,carry);
	}
//	print(newlist);
	return newlist;
	
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
main()
{
	node *head1=NULL;
	node *head2=NULL;
	insert_front(&head1,6);
	insert_front(&head1,9);
	insert_front(&head2,4);
	insert_front(&head2,5);
	insert_front(&head2,7);
	insert_front(&head2,8);
 
	node *hd3=addlist(head1,head2);
	reverse(&head1);
	print(head1);
	cout<<endl;
	reverse(&head2);
	print(head2); 
	cout<<endl;
	//print(hd3);
	cout<<endl;          
	reverse(&hd3);       
	print(hd3);
	
}

=======
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
node *addlist(node *hd1,node *hd2)
{
	
	node *newlist=NULL;
	int carry=0,sum;
	while((hd1!=NULL)|| (hd2!=NULL))
	{
		sum=carry+(hd1?hd1->data:0)+(hd2?hd2->data:0);
		carry=sum/10;
		sum=sum%10;
		insert(&newlist,sum);


	 	if(hd1!=NULL)	
		    hd1=hd1->next;
		if(hd2!=NULL)
		    hd2=hd2->next;
		
	}
	if(carry>0)
	{
		insert(&newlist,carry);
	}
//	print(newlist);
	return newlist;
	
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
main()
{
	node *head1=NULL;
	node *head2=NULL;
	insert_front(&head1,6);
	insert_front(&head1,9);
	insert_front(&head2,4);
	insert_front(&head2,5);
	insert_front(&head2,7);
	insert_front(&head2,8);
 
	node *hd3=addlist(head1,head2);
	reverse(&head1);
	print(head1);
	cout<<endl;
	reverse(&head2);
	print(head2); 
	cout<<endl;
	//print(hd3);
	cout<<endl;          
	reverse(&hd3);       
	print(hd3);
	
}

>>>>>>> 5ebb2368b3a837f21137e27a9116f7c0d486de30
