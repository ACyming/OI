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
	for(int i=op;i<=n;i+=2)//ֻ��������ż��
		if(!vis[i]&&isp[i+a[x-1]])
		{
			a[x]=i;
			vis[i]=1;
			dfs(x+1,op^3);//1^3��Ϊ2,2^3��Ϊ1�����Ա�֤����������Ϊһ��һż
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
