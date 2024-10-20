#include<bits/stdc++.h>
using namespace std;
int a[1000],b;
void hs(int x,int y)
{
	int cnt=0;
	for(int i=1;i<=x;i++)
	{
		cin>>a[i];
	}
	for(int i=x+1;i<=y+x;i++)
	{
		cin>>b;
		a[i]=b;
	}
	for(int i=1;i<=x+y;i++)
	{
		for(int j=1;j<=x+y;j++)
		{
			if(a[i]==a[j]&&i!=j)
			{
				cnt++;
				a[j]=-100;
			}
		}
	}
	for(int i=1;i<=x+y;i++)
	{
		if(a[i]!=-100)
		{
			cout<<a[i]<<" ";
		}
	}
}
int main()
{
	int a,b;
	cin>>a>>b;
	hs(a,b);
	return 0;
}
