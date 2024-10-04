#include<bits/stdc++.h>
using namespace std;
int n,a[999999],b[99999];
void fun(int x)
{
	if(x>n)     
	{
		for(int i=1;i<=n;i++)
		{
			printf("%5d",a[i]);
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			a[x]=i;
			b[i]=1;
			fun(x+1);
			b[i]=0;
		}
	}	
}
int main()
{
	cin>>n;
	fun(1);
}
