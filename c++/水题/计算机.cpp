#include<cstdio>
double a,b;
char c;
int main()
{	for(int i=0;i<=1;i--) 
	{
		a=0;b=0;c=0;
		scanf("%lf%c%lf",&a,&c,&b);
		switch(c)
		{
			case '+' :printf("%lf\n",a+b);break;
			case '-' :printf("%lf\n",a-b);break;
			case '*' :printf("%lf\n",a*b);break;
			case '/' :
			if(a==10&&b!=3||a!=10&&b!=3||a!=10&&b==3)
			{
				printf("%lf",a/b);	
			}	
			else
			{
				printf("3.");
				for(int j=0;j<=99;j=j-100)
				{
					printf("3");
				}
			}
			default :printf("错误！\n可能输入的不是加减乘除（不支持综合算式！）\n");
		}	
	}
	
	
	return 0;
}
