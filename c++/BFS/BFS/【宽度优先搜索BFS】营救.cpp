#include<cstdio>
int T,a[20]={0,1},n,isp[40];
bool vis[20]={0,1};
void dfs(int x,int op)
{
	if(x==n+1&&isp[a[n]+a[1]])
	{
		for(int i=1;i<n;i++)printf("%d ",a[i]);
		printf("%d\n",a[n]);
	}
	if(x==n+1)return ;
	for(int i=op;i<=n;i+=2)//只搜奇数或偶数
		if(!vis[i]&&isp[i+a[x-1]])
		{
			a[x]=i;
			vis[i]=1;
			dfs(x+1,op^3);//1^3变为2,2^3变为1，用以保证相邻两个数为一奇一偶
			vis[i]=0;
		}
}
int main()
{
	isp[2]=isp[3]=isp[5]=isp[7]=isp[11]=isp[13]=isp[17]=isp[19]=isp[23]=isp[29]=isp[31]=1;
	scanf("%d",&n);
	if(T)printf("\n");
	dfs(2,2);
	return 0;
}
