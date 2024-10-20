#include <cstdio>
int a;
int main()
{
	scanf("%d",&a);
	if(a%4==0&&a%100!=0||a%400==0)
	{
		printf("Y");
	}
	else
	printf("N");
	return 0;
}
