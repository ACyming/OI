#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,ys;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int a=i,hws=0;
		ys=i;
		while(a!=0)
		{
			hws=hws*10+a%10;
			a=a/10;
		}
		if(hws==ys)
		{
			++sum;
		}
	}
	printf("%d",sum);
	return 0;
 } 
