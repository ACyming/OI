#include<bits/stdc++.h>
using namespace std;
int n,a[999999]
void fun(int x)
{
	if(x>n)     
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		a[x]=i;
		fun(x+1);		
	}	
}
	
int main()
{
	cin>>n;
	fun(1);
}
