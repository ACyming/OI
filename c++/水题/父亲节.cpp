#include<bits/stdc++.h>
#include<windows.h> 
using namespace std;
int main()
{
	int x,f=100;
	int  i, j, k, l, m,a;
char c=3; 
	x=MessageBox(GetForegroundWindow(),"����һ��һ�ȵĸ��׽�","����һ��һ�ȵĸ��׽�(�㶼������ԣ�)",4);
	if(x==6)
	{
		x=0;
		x=MessageBox(GetForegroundWindow(),"���İɣ���","����һ��һ�ȵĸ��׽�",4);
		if(x!=6)
		{
			
			cout<<"�Ǻǣ����������ˣ�����";	
			cout<<"�ڵ��С�ͷ�..."<<endl;
			for(int i=1;i<=100000;i++)
			{
				int x=GetSystemMetrics(SM_CXSCREEN);//���x�� 
 	  		int y=GetSystemMetrics(SM_CYSCREEN);//���y�� 
 	  		SetCursorPos(rand()%x,rand()%y);//��� x y�� ���
			}
			
 	  		
			cout<<"but�����ǣ�..."<<endl<<"����Ҳ�еģ���";
			 system("color c");
while(1){

for (int i=1; i<=5; i++)    printf("\n"); 
for (int i=1; i<=3; i++) {
for (int j=1; j<=32-2*i; j++)  printf(" "); 
for (int k=1; k<=4*i+1; k++)  printf("%c", c);
for (int l=1; l<=13-4*i; l++)  printf(" "); 
for (int m=1; m<=4*i+1; m++)  printf("%c", c);
printf("\n"); 
}
for (int i=1; i<=3; i++) { 
for (int j=1; j<=24+1; j++)   printf(" "); 
for (int k=1; k<=29; k++)   printf("%c", c);
printf("\n");  //
}
for (int i=7; i>=1; i--) { //
for (int j=1; j<=40-2*i; j++)  printf(" "); //
for  (int k=1; k<=4*i-1; k++)  printf("%c",c);//
printf("\n");  //
}
for (int i=1; i<=39; i++)    printf(" "); //
printf("%c\n", c);  //
for (int i=1; i<=5; i++)    printf("\n"); //
}






		
		}
		else
		{
			while(1){

for (i=1; i<=5; i++)    printf("\n"); 
for (i=1; i<=3; i++) {
for (j=1; j<=32-2*i; j++)  printf(" "); 
for (k=1; k<=4*i+1; k++)  printf("%c", c);
for (l=1; l<=13-4*i; l++)  printf(" "); 
for (m=1; m<=4*i+1; m++)  printf("%c", c);
printf("\n"); 
}
for (i=1; i<=3; i++) { 
for (j=1; j<=24+1; j++)   printf(" "); 
for (k=1; k<=29; k++)   printf("%c", c);
printf("\n");  //
}
for (i=7; i>=1; i--) { //
for (j=1; j<=40-2*i; j++)  printf(" "); //
for (k=1; k<=4*i-1; k++)  printf("%c",c);//
printf("\n");  //
}
for (i=1; i<=39; i++)    printf(" "); //
printf("%c\n", c);  //
for (i=1; i<=5; i++)    printf("\n"); //
}
		 } 
	}
	else
	{
		cout<<"�㷢����һ���ʵ�";
		Sleep(5000);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		printf("���߰����������\n���ؿ���");
	
	printf("a��ʼ b�˳� c�´� d�²�\n");
	scanf("%c",&a);
	if(a=='a')
	{
		printf("����������ߣ��ϰѡ���������ż����������ɡ");
		printf("��ʱ��������׷�����ˣ���Ҫ 1������ ���� 2�����ܣ�\n");		 
		scanf("%d",&b);
		if(b==1)
		{
			printf("������ߣ���һ�������ң����ȥ�ˡ�������һ����������ʱ������׷�����ˣ���ѡ�� 1���˹�������ȥ 2������ 3���ϰѸ���Ӳ��\n");
			scanf("%d",&b);
			if(b==1)
			{
				printf("�����´���������������¥����ˤ����\n");
				printf("���������ʧ��");
				 
				return 0;
			}
			if(b==2)
			{
				printf("�������������䣬��ʱ���ֻ����ˡ������������㡣\n");
				printf("���������ʧ��");
				 
				return 0;
			}
			if(b==3)
			{
				printf("����ϰѴ��˷�������۾�����˻����ߡ�\n");
				printf("ǰ���и����ݡ���Ҫ 1���� ���� 2���£�");
				scanf("%d",&c);
				if(c==2)
				{
					printf("��������һ¥�����㡣�㱻ץ�ˣ����������ʧ��");
					 
					return 0;
				}
				if(c==1)
				{
					printf("����������̨����ѡ�� 1����ȥ 2�������ͷ������ 3������\n");
					scanf("%d",&d);
					if(d==1)
					{
						printf("������ɡ������ɡ������ȥ����ɹ�����\n");
						printf("������������ı�����\n");
						printf("1ȥ������ 2����Ů��Ƭ�Ի��� 3�����������۾�\n");
						scanf("%d",&e);
						if(e==1)
						{
							printf("�㱻���������ˡ����������ʧ��");
							 
							return 0;
						}
						if(e==2)
						{
							printf("����������һ�ס����������ʧ��");
							 
							return 0;
						}
						if(e==3)
						{
							printf("��ɹ��ˡ����������ɹ�");
							printf("ͨ����һ��   1��һ��   2�˳�"); 
							scanf("%d",&i);
							if(i==1)
							{
								printf("���ӳ��˷�����ļ�,Ҫ��λؼң�\n 1��·��   2���Աߵ����г�   3��·\n");
								scanf("%d",&j);
								if(j==1)
								{
									printf("�㷢��·���Ƿ�������ǰ����������   1����   2ľ��\n");
									scanf("%d",&k);
									if(k==1)
									{
										printf("�㱻����������ˣ��ؼ�ʧ��");
										 
										return 0;  
									}
									else
									{
										printf("�㱻����������ˣ��ؼ�ʧ��");
										 
										return 0; 
									}
								}
								if(j==2)
								{
									printf("���ﵽ��ʮ��·�ڣ�Ҫ������?  1ǰ 2�� 3��");
									scanf("%d",&l);
									printf("��ˤ�ˣ��ؼ�ʧ��");
									 
								}
								if(j==3)
								{
									printf("�������˷�����  Ҫ��ô����  1����  2��");
									scanf("%d",&m);
									if(m==1)
									{
										printf("�㱻����������ˣ��ؼ�ʧ��");
										 
										return 0;
									}
									else
									{
										printf("����·�ˣ�����������  1����   2����");
										scanf("%d",&n);
										if(n==1)
										{
											printf("�����򱻳����ˣ�����˼ң��ؼҳɹ�");
											return 0; 
										}
										else
										{
											printf("�㱻����������ˣ��ؼ�ʧ��");
											 
											return 0;
										}
									}
								}
							}
							else
								return 0;
						}
					}
					if(d==2)
					{
						printf("�������������ˡ����������ʧ��\n");
						 
						return 0;
					}
					if(d==3)
					{
						printf("������������������˶�־��ȥ�ͷ�����ա�������Ǳ�����������ˡ����������ʧ��\n");
						 
						return 0;
					}
				}
			}
		}
		else
		{
			printf("����ʱԶ���˷�����\n");
			printf("��ǰ�����������䣺1������2����"); 
			scanf("%d",&f);
			if(f==1) 
			{
				printf("��ӳ�����ͨ������˳�ȥ\n");
				printf("������׷�����ˡ������ô����\n");
				printf("1����ż 2���� 3��");
				scanf("%d",&g);
				if(g==1)
				{
					printf("��������Ϊ��С����������С���������������\n");
					printf("ǰ����һ��bt����Ҫ��ס�㡣�����ô����\n");
					printf("1����Ů��Ƭ 2��");
					scanf("%d",&h);
					if(h==1)
					{
						printf("�ɹ��ˣ��������˷����򣡷�����ǳ�����");
						printf("���������ɹ�������");
						 
						return 0;
					}
					if(h==2)
					{
						printf("����û�иչ�������ʧ��");
						 
						return 0;
					}
				}
				if(g==2)
				{
					printf("��û�չ����������������ʧ��\n");
					 
					return 0;
				}
				if(g==3)
				{
					printf("�㱻ץס�ˡ����������ʧ��");
					 	
					return 0;			
				}
		    }
			if(f==2)
			{ 
				printf("�������ˮ������ȥ�����ͷ̫��ס�ˡ����������������С�������\n");
				printf("���������ʧ��\n");
				 
				return 0;
			}
		}
	}
	if(a=='b')
	{
		return 0;
	}
	if(a=='c')
	{
	
	}
	if(a=='d')
	{
		gets(tu);
		printf("���**����Ȼ���²���\n");
		 
	}
	}
	return 0;
}
