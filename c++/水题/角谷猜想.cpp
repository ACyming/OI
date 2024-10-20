#include <cstdio>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	 if(a==1)
	 {
	 	printf("End");
	 }
	return 0;
	b=a;
	c=a;
	if(a%2!=0)
	{
		b=b*3+1;
		printf("%d*3+1=%d",a,b);
		if(a%2==0)
		{
			while(a!=0)
			{
				a/2;
				printf("%d/2=%d",a,c);
			}	
		}	
	 } 
	 else if(a%2==0)
	 {
			while(a!=0)
			{
				a/2;
				printf("%d/2=%d",a,c);
			}		
	 }
	printf("End");
	return 0;
 } 
