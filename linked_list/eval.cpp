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

main()
{
	node *head=NULL;
	insert(&head,10,3);
	insert(&head,10,2);
	insert(&head,10,1);
	print(head);
	int x;
	cin>>x;
	eval(head,x);
		
}
