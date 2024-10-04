#include<cstdio>
#include<cmath>
using namespace std;
int ss(int x)
{
	if(x<2)
	{
		return 0;
	}
	else for(int i=2;i<=sqrt(x);i++)
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
	int n,m,s=0;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++)
	{
		if(ss(i)==1)
		{
			s++;
		}
	}
	printf("%d",s);
}
