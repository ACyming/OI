#include<cstdio>
using namespace std;
int n,ans,vis[1001],a[1001];
void fun(int x)
{
	if(x>n*2)
	{
		ans++;
		return;
 }
	if(a[1]>a[2])
	{
		return;
	}
	for(int i=1;i<=2;i++)
	{
		if(vis[i]>0)
		{
			vis[i]--;
			a[i]++;
			fun(x+1);
			a[i]--;
			vis[i]++;
		}
	}
}
int main()
{
	scanf("%d",&n);
	vis[1]=n;
	vis[2]=n;
	fun(1);
	printf("%d",ans);
}
