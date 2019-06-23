#include<bits/stdc++.h>
using namespace std;
int issafe(int a[4][4],int x,int y,int n)
{
	if((x>=0)&&(y>=0)&&(x<=n-1)&&(y<=n-1)&&(a[x][y]==1))
	{ 
	return 1;
    }
	return 0;
}
int ispath(int a[4][4],int x,int y,int n)
{
	if((x==n-1)&&(y==n-1))
	{
	if(issafe(a,x,y,n))
	return 1;
}
	if(issafe(a,x,y,n))
	{
	return(ispath(a,x,y+1,n)||ispath(a,x+1,y,n));
	}
	return 0;
}
main()
{
	int n=4;
	int a[4][4]={{1,1,0,0},{1,1,1,0},{0,1,1,0},{0,0,1,0}};
//	ispath(a,0,0,n);
	if(ispath(a,0,0,n)==1)
	cout<<"Yes";
	else
	cout<<"No";
}
