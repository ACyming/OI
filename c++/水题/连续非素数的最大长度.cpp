#include<bits/stdc++.h>
using namespace std;
int n,num,maxn;
bool pd(int n)
{
	if(n<2)
	{
		return 0;
	}
	else for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	
		{
			return 0;	
		}
	}
	return 1;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(!pd(i))
		{
			num++;
		}
		else
		{
			maxn=max(maxn,num);
			num=0;
		}
	}
	cout<<maxn;
	return 0;
}
