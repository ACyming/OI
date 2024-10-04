#include <cstdio>
int a;
int main()
{
	printf("你今天心情咋样（1~5）");
	scanf("\n%d",&a);
	switch (a)
	{ 
	case 1:printf("你今天很开心哦，要保持");break;
	case 2:printf("你今天比较开心哦，要坚持到最开心");break;
	case 3:printf("开心点");break;
	case 4:printf("你怎么了，发生什么事了");break;
	case 5:for(long long i=0;i<=1000000000;i++)
	{
		printf("  开心点，你怎么了，发生什么事了  "); 
	}break;
	}
	return 0; 
 } 
