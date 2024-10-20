#include<bits/stdc++.h>
using namespace std;
int n,s,maxx;
bool fun(int x)
{
	if(x==1)
	{
		return 0;
	}
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()

{
	scanf("%d",&s);
	for(int i=1;i<=s;i++)
	{
		if(fun(i)==1&&fun(s-i)==1)
		{
			n=i*(s-i);
			if(maxx<n)
			{
				maxx=n;
			}
		}
	}
	printf("%d",maxx);
	return 0;
} 
