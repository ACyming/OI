#include<cstdio>
using namespace std;

int main()
{
	int a[10000],b[10000],big,n;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	big=a[0];
	for (int i=1;i<n+1;i++)
	{
		scanf("%d", &a[i]);
		if (a[i]>big) 
		{
			big=a[i];
		}
	}
	for (int i=0;i<=big;i++) 
	{
		for (int j=0;j<n;j++)
		{
			if (a[j]==i)
			{
				b[i]++;	
			}
		}
	}
	for (int i=0;i<=big;i++)
	{
		printf("%d\n", b[i]);	
	}
}
