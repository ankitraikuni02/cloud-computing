#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int coff;
		int exp;
		node *next;
};
void insert(node **hd,int coff1,int pow1)
{
	node *temp=new node();
	temp->coff=coff1;
	temp->exp=pow1;
	temp->next=NULL;
	if(*hd==NULL)
	{
		*hd=temp;
		return;
	}
	node *ptr=*hd;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
}
print(node *hd)
{
	while(hd!=NULL)
	{
		cout<<hd->coff<<"x^"<<hd->exp;
		hd=hd->next;
		if(hd!=NULL)
			cout<<"+";
	}
	cout<<endl;
}
int power(int a, int b)
{
	int mul=1;
	while(b!=0)
	{
		mul*=a;
		b--;
	}
	return mul;
}
eval(node *hd,int x)
{   int res=0;
	while(hd!=NULL)
	{
		res+=hd->coff*(power(x,hd->exp));
		hd=hd->next;
	}
	cout<<res;
}
multiply(node *hd1,node *hd2,node **hd3)
{
	while(hd1!=NULL)
	{
		node *temp=hd2;
		node *t=*hd3;
		while(temp!=NULL)
		{
			
			t=new node();
			int c=(hd1->coff)*(temp->coff);
			int e=(hd1->exp)+(temp->exp);
			//cout<<c<<" "<<e<<" ";
			insert(hd3,c,e);
			temp=temp->next;
		}
		
		hd1=hd1->next;
	}

//	print(*hd3);
}

main()
{
	node *head=NULL;
	node *head2=NULL;
	insert(&head,3,2);
	insert(&head,5,1);
	insert(&head,6,0);
	insert(&head2,6,1);
	insert(&head2,8,0);
	print(head);
	print(head2);
	node *head3=NULL;
	multiply(head,head2,&head3);
	print(head3);
//	int x;
//	cin>>x;
//	eval(head,x);
		
}
