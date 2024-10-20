#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
void f(int i)
{
	system("cls");
	char c=i>9?i+55:i+48;
	char s[20];
	sprintf(s,"COLOR 0%c",c);
	system(s);	
	double x,y;
	int H=3;
	int j;
	int rd_m=rand()%30;
	int rd_n=rand()%100;
	for(j=0;j<rd_m;j++)
	printf("\n");
	for(y=-4;y<=0;y+=0.3)
	{
	for(j=0;j<rd_n;j++)
	printf(" ");	
	for(x=-4;x<=4;x+=0.2)
	if(fabs(sqrt(x*x+y*y)-H*sin(2*atan(y/x)))<=1||fabs(sqrt(x*x+y*y)-H*sin(2*atan(-y/x)))<=1)
	printf("*");
	else
	printf(" ");
	printf("\n");
}
for(y=-1;y<=0;y+=0.2)
{
for(j=0;j<rd_n;j++)	
printf(" ");
for(x=-4;x<=4;x+=0.2)
if(fabs(y)-0.65*x*x>=0.2)
printf("*");
else
printf(" ");
printf("\n");
}
Sleep(10);
if(i==15)
f(0);
	else
	f(i+1);
return;
}
	int main()
{
	system("mode con cols=160 lines=50");
	f(0);		
	return 0;	
}
 
 
