#include <cstdio>
int main()
{
	long a,b,n;
	double x,y; 
	scanf("%ld",&n);
	scanf("%ld%ld",&a,&b); 
	x=b/(a/1.0);
	for (int i=2;i<=n;i++)
	{
		scanf("%ld%ld",&a,&b);
		y=b/(a/1.0);
		if  (y-x>0.05) 
		{
		printf("better\n");	
		}
		  else if(x-y>0.05) 
		  {
		  	printf("worse\n");
		  }
		  else 
		  {
		  	printf("same\n");
		  }
	}
	return 0;
}
