#include<iostream>
using namespace std;
int a[100],m,n;
bool x;
void hs(int m,int b) 
{  
  	if(m==0)
  	{
  		x=1;
  		return;
  	}
	if(m<0||b==0&&m!=0)
	{
	 	return;
	}
  	hs(m-a[b],b-1);
  	if(x==1)
	{
	  	cout<<"number:"<<b<<"  "<<"weight:"<<a[b]<<endl;
	}
  	else
	{
	  	hs(m,b-1);
	}
}
int main()
{
  	cin>>m>>n;
  	for(int i=1;i<=m;i++)
  	{
  		cin>>a[i];
  	}
  	hs(n,m);
  	if(x==0)
  	cout<<"not found";
  	return 0;
}
