#include<cstdio>
using namespace std;
int k=0;
int vis[10001],vi[10001],v[10001],a[10001];
void dfs(int x)//	X��������Ŀǰ���е�����һ�С� 
{
	if(x>8)// ��X>8��ʱ��˵��ÿһ�еĻʺ��Ѿ�ȷ������������ĳ����Ѿ���X�е������е����������һ�飬�����д���Ҳ��ó���ȷ�𰸣����Դ���ȷ�� 
	{
		k++;
		printf("No. %d\n",k);
		for(int i=1;i<=8;i++)//�ڼ��С� 
		{
			for(int j=1;j<=8;j++)//�ڼ��С� 
			{
				 if(i==a[j])printf("1 ");//����һ�У�i�У�==a[j]��ʱ��˵�������лʺ� 
				 else printf("0 ");
			}
			printf("\n");
		}
	}
	for(int i=1;i<=8;i++) //��X�еĵ�i�С� 
	{
		if(!vis[i]&&!vi[x-i+7]&&!v[x+i])//vi�У�vi����,v��б�С�����Ĳ����ǹ��ɡ� 
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
