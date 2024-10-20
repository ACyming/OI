#include <cstdio>
float a,b,ans;
char j;
int main()
{
	printf("计算器");
	printf("\n输入两个数字，和一个计算符号，系统会计算"); 
	scanf("%f%f%c",&a,&b,&j);
	switch(j)
	{
		case '+':ans=a+b;printf("%f",ans);break;
		case '-':ans=a-b;printf("%f",ans);break;
		case '*':ans=a*b;printf("%f",ans);break;
		case '/':ans=a/b;printf("%f",ans);break;
		
	}
	return 0; 
}
 
