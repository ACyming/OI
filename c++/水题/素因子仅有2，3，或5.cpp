#include<bits/stdc++.h>
using namespace std;
int hs(int x)
{
	for(int j=2;j<=x;j++)
	{
		if(x%j==0&&x!=j)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n,i=3;
	cin>>n;
	while(n!=0)
	{
			i++;
			int t;
			if(hs(i)==1)
			{
				t=i;
			}
			else
			{
				continue;
			}
			while(t%2==0)
			{
				t=t/2;
			}
			while(t%3==0)
			{
				t=t/3;
			}
			while(t%5==0)
			{
				t=t/5;
			}
			if(t==1)
			{
				--n;
				cout<<i<<" ";
			}
	}
	return 0;
}
