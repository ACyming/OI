#include<cstdio>
using namespace std;
int sum,x,n;
bool fun(int x)
{
	sum=0;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
		{
			sum+=i;
		}
	}
	if(sum==x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(fun(i)==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
