#include <cstdio>
int a,b,ans;
int main() 
{
	scanf("%d,&a");
	for (int i=0;i<=a;i++)
	{
		scanf("%d",&b);
		if(b<=50&&b>15)
		{
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
