#include<cstdio>
#include<cstring>
char s[110];//�����ַ��� 
char c;//����һ���ַ� 
printf("           \n");
printf("Y 7 8 9 % /\n");
printf("N 4 5 6 * +\n");
printf("C 1 2 3 - =\n");
printf("  0 M+     \n");//��ӡģ�� 
printf("��������ʽ");
scanf("%s",s);//�����ַ��� 
��������������������������������
��Ȩ����������ΪCSDN������fromthesky����ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/fromthesky/article/details/97488418
int len=strlen(s);//���ַ��� 
	for(int i=0;i<=len;i++)
	{
		char c;//����c 
		c=s[i];
		if(c=='+' || c=='-' || c=='*' || c=='/' || c=='=')
		{
			continue;
		}
		else
		{
			s[i]=s[i]-'0';
		}
		//���ַ�ת��������
��������������������������������
��Ȩ����������ΪCSDN������fromthesky����ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/fromthesky/article/details/97488418
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
		//�������֣����ѽ������s[i+1]
��������������������������������
��Ȩ����������ΪCSDN������fromthesky����ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/fromthesky/article/details/97488418
		if(c=='=')
		{
			printf("    %d     \n",s[i-1]);
			printf("Y 7 8 9 % /\n");
			printf("N 4 5 6 * +\n");
			printf("C 1 2 3 - =\n");
			printf("  0 M+     \n");
			//������ 
		}
		int a;
		printf("�Ƿ�Ҫ�رճ���,1.��,0.��\n");
		scanf("%d",&a);
		if(a==0)
		{
			c='N';
		}
		else
		{
			c='Y';
		}
		//�жϳ����Ƿ����
����
