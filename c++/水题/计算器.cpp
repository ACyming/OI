#include <cstdio>
float a,b,ans;
char j;
int main()
{
	printf("������");
	printf("\n�����������֣���һ��������ţ�ϵͳ�����"); 
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
 
