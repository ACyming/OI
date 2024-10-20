#include<stdio.h>

int main()

{

int i,j;
float students[50];
float sum=0,average;
for(i=0;i<10;i++) 
{
scanf("%f",&students[i]);

sum=sum+students[i];
}
average=sum/10;
for(i=0;i<10;i++)
{
	if (students[i]<average)
{
	printf("%0.2f\n",students[i]);
}
}
}
