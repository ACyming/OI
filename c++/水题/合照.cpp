#include<cstdio>
#include<algorithm>
using namespace std;
int a[1005],n,s,a1,b1,sum=0,mina=999,minb=999;
int main()
{
	
	scanf("%d%d",&n,&s);
	for (int i=1;i<=n;i++)
	{
		scanf("%d%d",&a1,&b1);
		if (a1<mina)
		{
			mina=a1;
		}
		if (b1<minb)
		{
			minb=b1;
		}
	}
	for (int i=1;i<=n;i++)
	{
		if (s>minb)
		{
			s=s-minb;
			minb=minb+(s-minb);
			s=s+minb+mina;
			sum++;
		}	
	}
	printf("%d",sum);
	return 0;
}
