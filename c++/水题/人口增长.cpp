#include <cstdio>
int q; 
char x;
double a,b,ans;
int main()
{
	printf("����һ����ʽ��ϵͳ�����\n"); 
	scanf("%d",q);
		{		for (int i=1;i<=100;i++)
	{
		ans=0;
		scanf("\n%lf%c%lf",&a,&x,&b);
			if(a>9999999||b>9999999)
			{
			printf("������ô�����õ����𣿣�");
			} 
			else 
			switch (x)
	{ 
		case '+':ans=a+b;printf("%lf",ans);break;
		case '-':ans=a-b;printf("%lf",ans);break;
		case '/':ans=a/b;printf("%lf",ans);break;
		case '*':ans=a*b;printf("%lf",ans);break;
	}	
	} } 
	return 0;
 } 
