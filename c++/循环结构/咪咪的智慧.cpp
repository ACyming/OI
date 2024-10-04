#include <cstdio>
int n,x,y,ans;
int main()
{
	scanf("%d%d",&n,&y);
	for (int c=1;c<=n;c++)
	{
		scanf("%d",&x);
		if(y>x)
		{
			ans++;
		}
	}
	printf("%d",ans); 
	return 0;
}
