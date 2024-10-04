#include <cstdio>
int a,b,ans;
int main()
{
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		ans=a*a;
	}
	else
	{
		ans=b*b;
	}
	printf("%d",ans);
	return 0;
}
