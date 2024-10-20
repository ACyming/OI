#include<iostream>
#include<cmath>
int i;
int main()
{
	for(i=10;i<=90;i++)
	{
		if(judge(i)&&judge((i%10)*10+(i/10)))
		{
			printf("%d",i);
		}
	}
  	return 0;
 } 
