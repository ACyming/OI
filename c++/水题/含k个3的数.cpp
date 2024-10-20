#include <cstdio>
int main()
{
	int m,k,n,s=0,t;
	scanf("%d%d",&m,&k);
	n=m;
	while(n!=0)
	{
		t=n%10;
		if(t==3)
		{
			s++;
		}
		n/=10;
	}
	if(m%19==0&&s==k)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
