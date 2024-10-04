#include <cstdio>
int n,ans,a;
int main() 
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		ans=ans+a;
	 } 
	 printf("%d",ans);
	return 0;
}
