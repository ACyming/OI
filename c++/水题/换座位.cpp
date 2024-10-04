#include <cstdio>
int n,x,ans;
int main()
{
	scanf("%d",&n);
	for (int c=1;c<=n;c++)
	{
		scanf("%d",&x);
		if(x!=c) 
		{
			ans++;
		}
	}
	printf("%d",ans); 
	return 0;
}
