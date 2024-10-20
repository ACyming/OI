#include <cstdio> 
int n,ans,a;
int main() 
{
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>50&&a<15)
		{
			ans=ans+1;
		}
	}
	printf ("%d",ans);
	return 0;
}
