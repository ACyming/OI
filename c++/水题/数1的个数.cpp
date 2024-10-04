#include <cstdio>
using namespace std;
int n,ans=0,r;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)	
	{
		r=i;
		while(r!=0)
		{
			if(r%10==1)
			{
				ans++;
			}
			r=r/10;
		}
	} 
	printf("%d",ans);
	return 0;
 } 
 
