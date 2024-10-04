#include<cstdio>
using namespace std;
int k=0;
int vis[10001],vi[10001],v[10001],a[10001];
void dfs(int x)//	X代表现在目前运行的是哪一列。 
{
	if(x>8)// 当X>8的时候，说明每一列的皇后已经确定，由于下面的程序已经将X列的所有行的情况运行了一遍，而下列代码也会得出正确答案，所以答案正确。 
	{
		k++;
		printf("No. %d\n",k);
		for(int i=1;i<=8;i++)//第几列。 
		{
			for(int j=1;j<=8;j++)//第几行。 
			{
				 if(i==a[j])printf("1 ");//当这一行（i行）==a[j]的时候，说明这里有皇后。 
				 else printf("0 ");
			}
			printf("\n");
		}
	}
	for(int i=1;i<=8;i++) //第X行的第i列。 
	{
		if(!vis[i]&&!vi[x-i+7]&&!v[x+i])//vi行，vi是列,v是斜列。里面的操作是规律。 
		{
			a[x]=i;
			vis[i]=1;
			vi[x-i+7]=1;
			v[x+i]=1;
			dfs(x+1);
			vis[i]=0;
			vi[x-i+7]=0;
			v[x+i]=0;
		}
	}
}
int main()
{
	dfs(1);
}
