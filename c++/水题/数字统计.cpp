#include <cstdio>
using namespace std;
int x,n,ans,r,y;
int main()
{
	scanf("%d%d",&x,&n);
	for(int i=x;i<=n;i++)	
	{
		r=i;
		while(r!=0)
		{
			y=r%10;
			if(y==2)
			{
				ans++;
				y=0;
			}
			r=r/10;
		}
	} 
	printf("%d",ans);
	return 0;
 } 
 
