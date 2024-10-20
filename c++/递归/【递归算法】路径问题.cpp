#include<bits/stdc++.h>
using namespace std;
int a[10000],cnt;
int n;
void fun(int x,int y)
{
	if(x>n) 
	{
		return;
	}
	a[y]=x;
	if(x==n)
	{
		cnt++;
		cout<<cnt<<" "<<a[1]<<">";
		for(int i=2;i<=y-1;i++)
		{
			cout<<a[i]<<">";
		}
		cout<<a[y];
		cout<<endl;
		return;
	}
	fun(x+1,y+1);
	fun(x+2,y+1);	
}
int main()
{
	
	cin>>n;
	fun(1,1);
}
