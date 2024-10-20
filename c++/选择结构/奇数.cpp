#include<cstdio>
#include<cstring>
char s[110];//定义字符串 
char c;//定义一个字符 
printf("           \n");
printf("Y 7 8 9 % /\n");
printf("N 4 5 6 * +\n");
printf("C 1 2 3 - =\n");
printf("  0 M+     \n");//打印模板 
printf("请输入算式");
scanf("%s",s);//输入字符串 
————————————————
版权声明：本文为CSDN博主「fromthesky」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/fromthesky/article/details/97488418
int len=strlen(s);//求字符串 
	for(int i=0;i<=len;i++)
	{
		char c;//定义c 
		c=s[i];
		if(c=='+' || c=='-' || c=='*' || c=='/' || c=='=')
		{
			continue;
		}
		else
		{
			s[i]=s[i]-'0';
		}
		//把字符转换成数字
————————————————
版权声明：本文为CSDN博主「fromthesky」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/fromthesky/article/details/97488418
c=s[i];
		if(c=='+')
		{
			t=s[i-1]+s[i+1];
			s[i+1]=t;
		}
		if(c=='-')
		{
			t=s[i-1]-s[i+1];
			s[i+1]=t;
		}
		if(c=='*')
		{
			t=s[i-1]*s[i+1];
			s[i+1]=t;
		}
		if(c=='/')
		{
			t=s[i-1]/s[i+1];
			s[i+1]=t;
		}
		//计算数字，并把结果放在s[i+1]
————————————————
版权声明：本文为CSDN博主「fromthesky」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/fromthesky/article/details/97488418
		if(c=='=')
		{
			printf("    %d     \n",s[i-1]);
			printf("Y 7 8 9 % /\n");
			printf("N 4 5 6 * +\n");
			printf("C 1 2 3 - =\n");
			printf("  0 M+     \n");
			//输出结果 
		}
		int a;
		printf("是否要关闭程序,1.是,0.否\n");
		scanf("%d",&a);
		if(a==0)
		{
			c='N';
		}
		else
		{
			c='Y';
		}
		//判断程序是否继续
——
