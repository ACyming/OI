#include<bits/stdc++.h>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<Windows.h>
#include<conio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#pragma comment(lib,"winmm.lib")
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using std::cout; using std::endl;
using std::copy; using std::string;
int gl=0;//���� 
int y;//���� 
int n();//
int s();
int m();
int yx();
int js();
int kt();
int zcbb();
int wycom();
int pand(int y);
int block00[4][4] = { { 10,0,0,0 },{ 1,1,1,1 },{ 0,0,0,0 },{ 0,0,0,0 } };
int block01[4][4] = { { 11,0,1,0 },{ 0,0,1,0 },{ 0,0,1,0 },{ 0,0,1,0 } };
int block02[4][4] = { { 12,0,0,0 },{ 0,0,0,0 },{ 1,1,1,0 },{ 0,1,0,0 } };
int block03[4][4] = { { 13,0,0,0 },{ 0,1,0,0 },{ 1,1,0,0 },{ 0,1,0,0 } };
int block04[4][4] = { { 14,0,0,0 },{ 0,0,0,0 },{ 0,1,0,0 },{ 1,1,1,0 } };
int block05[4][4] = { { 15,0,0,0 },{ 0,1,0,0 },{ 0,1,1,0 },{ 0,1,0,0 } };
int block06[4][4] = { { 16,0,0,0 },{ 0,0,0,0 },{ 1,1,1,0 },{ 1,0,0,0 } };
int block07[4][4] = { { 17,0,0,0 },{ 1,1,0,0 },{ 0,1,0,0 },{ 0,1,0,0 } };
int block08[4][4] = { { 18,0,0,0 },{ 0,0,0,0 },{ 0,0,1,0 },{ 1,1,1,0 } };
int block09[4][4] = { { 19,0,0,0 },{ 0,1,0,0 },{ 0,1,0,0 },{ 0,1,1,0 } };
int block10[4][4] = { { 20,0,0,0 },{ 0,0,0,0 },{ 1,1,1,0 },{ 0,0,1,0 } };
int block11[4][4] = { { 21,0,0,0 },{ 0,1,0,0 },{ 0,1,0,0 },{ 1,1,0,0 } };
int block12[4][4] = { { 22,0,0,0 },{ 0,0,0,0 },{ 1,0,0,0 },{ 1,1,1,0 } };
int block13[4][4] = { { 23,0,0,0 },{ 0,1,1,0 },{ 0,1,0,0 },{ 0,1,0,0 } };
int block14[4][4] = { { 24,0,0,0 },{ 0,0,0,0 },{ 0,1,1,0 },{ 1,1,0,0 } };
int block15[4][4] = { { 25,0,0,0 },{ 1,0,0,0 },{ 1,1,0,0 },{ 0,1,0,0 } };
int block16[4][4] = { { 26,0,0,0 },{ 0,0,0,0 },{ 1,1,0,0 },{ 0,1,1,0 } };
int block17[4][4] = { { 27,0,0,0 },{ 0,0,1,0 },{ 0,1,1,0 },{ 0,1,0,0 } };
int block18[4][4] = { { 28,0,0,0 },{ 0,0,0,0 },{ 1,1,0,0 },{ 1,1,0,0 } };

void initialWindow(HANDLE hOut);//��ʼ������
void initialPrint(HANDLE hOut);//��ʼ������
void gotoXY(HANDLE hOut, int x, int y);//�ƶ����
void roundBlock(HANDLE hOut, int block[4][4]);//������ɷ��鲢��ӡ����һ������λ��
bool collisionDetection(int block[4][4], int map[21][12], int x, int y);//�����ײ
void printBlock(HANDLE hOut, int block[4][4], int x, int y);//��ӡ����
void clearBlock(HANDLE hOut, int block[4][4], int x, int y);//��������
void myLeft(HANDLE hOut, int block[4][4], int map[21][12], int x, int &y);//����
void myRight(HANDLE hOut, int block[4][4], int map[21][12], int x, int &y);//����
void myUp(HANDLE hOut, int block[4][4], int map[21][12], int x, int &y);//˳ʱ����ת90��
int myDown(HANDLE hOut, int block[4][4], int map[21][12], int &x, int y);//��������
void myStop(HANDLE hOut, int block[4][4]);//��Ϸ��ͣ
void gameOver(HANDLE hOut, int block[4][4], int map[21][12]);//��Ϸ����
void eliminateRow(HANDLE hOut, int map[21][12], int &val, int &fraction, int &checkpoint);//�ж��Ƿ������в����·�ֵ
int main()
{
	system("color 0a");
	system("title Gickϵͳ");  // ����
	int e;
	while(1)
	{
		
		kt();
		printf("���������ѡ��");
		scanf("%d",&y);
		system("cls");
		e=pand(y);
		if(e==1)
		{
			return 0;
		}
		
	}
	 
	
	
	
}
int pand(int y)
{
	int e=1;
	if(y==1)
	{
		n();
	}
	else
	{
		if(y==2)
		{
			s();
		}
		else
		{
			if(y==3)
			{
				m();		
			}
			else
			{
				if (y==314)
				{
					printf("�ѿ����ƽ�ģʽ\n");
					printf("��Ϊ�����������޸�Ȩ��\n");
					gl=1;
					system("pause");
					m();
				}
				else
				{
					if(y==416)
					{
						printf("�ѿ�������Աģʽ\n");
						printf("��Ϊ������ȫ���޸�Ȩ��\n");
						gl=2;
						system("pause");
					}
					else
					{
						if (y==4)
						{
							yx();
						}
						else
						{
							if (y==5)
							{
								js();
							} 
							else
							{
								if(y==6)
								{
									zcbb();
								 } 
								 else
								 {
								 	if(y==0)
									 {
									 	return e;
									  } 
									  else
									  {
									  	printf("�޴˳���");
									  }
								 	
								  } 
								
							}
						}
					}
				}
			}
		}
	}
}
string concTwoStrings(const string &s1, const string& s2,const string& s3)
{
    return s1 + s2 +s3;
}
string oncTwoStrings(const string &s1, const string& s2)
{
    return s1 + s2;
}
int c()
{
	char c[4]="cls";
	system(c);
	return 0;
 } 
int v()
{
	char b[1000];
    char y[1000];
    char d[7]="arp -a",f;
	system(d);
    scanf("%s",y+1);
    string string2 = concTwoStrings("ping ",y+1," -l 6550");
    strcpy(b, string2.c_str());
    system(b);
    scanf("%s",f);
    
    return 0;
}
int t()
{
	char b[1000];
    char y[1000];
    char f;
    char j;
    printf("10������ĵ��Խ����Զ��ػ�\n"); 
    scanf("%s",&j);
    string string2=oncTwoStrings("shutdown -s -t " ,"10");
    strcpy(b, string2.c_str());
    system(b);
    return 0;
 } 
 int q()
{
	char b[12]="shutdown -a";
    system(b);
    return 0;
 } 
int j()
{
	char c[6]="calsc";
	system(c);
	return 0;
}
int e()
{
	char e[9]="explorer";
	system(e);
	return 0;
}
int r()
{
	char r[9]="regedt32";
	system(r);
	return 0;
}
int g()
{
	char r[11]="gpedit.msc";
	system(r);
	return 0;
}
int o()
{
	char r[4]="osk";
	system(r);
	return 0;
}
int w()
{
	char r[7]="winver";
	system(r);
	return 0;
}
int rt()
{
	char r[6]="mstsc";
	system(r);
	return 0;
}
int i()
{
	char r[9]="eudcedit";//BgdmWh0121
	system(r);
	return 0;
}
int d()
{
	char b[1000];
    char y[1000];
    char f;
    char j[1000];
    printf("��ݳ���·��\n:"); 
    scanf("%s",j+1);
    system(j);
    return 0;
}
int m()
{
	char xgh[4]="cls";
		int y;
	int kj=0;
	system(xgh);


	printf("�˳���0\n"); 
	printf("pingָ���밴1\n");
	printf("���������밴2\n");
	printf("�򿪼������밴3\n");
	printf("����Դ�������밴4\n");
	if (gl==2)
	{
	
	printf("��ע���༭���밴5\n");
	printf("��������밴6\n");
	}
	else
	{
	
	printf("��ע���༭���밴5�����ã�\n");
	printf("��������밴6�����ã�\n");
	}
	printf("����Ļ�����밴7\n");
	if (gl==1||gl==2)
	{
		printf("ȷ���ػ��밴8\n");
		printf("ȡ���ػ��밴9\n");

		
	}
	else
	{
		printf("ȷ���ػ��밴8(����)\n");
		printf("ȡ���ػ��밴9(����)\n");
	}
	printf("���Windows�밴10\n");
	printf("Զ�����������밴11\n");
	printf("����ģʽ�밴12\n");
	printf("�򿪿�ݳ����밴13\n");
	printf("����ҳ�밴14\n");
	while(1)
	{
		printf("�������ѡ��:"); 
		scanf("%d",&y);
	
	if(y==0)
	{
		return 0;
	}
	if(y==1)
	{
		v(); 
	}
	else
	{
		if(y==2)
		{
			c();

			printf("�˳���0\n"); 
			printf("pingָ���밴1\n");
			printf("���������밴2\n");
			printf("�򿪼������밴3\n");
			printf("����Դ�������밴4\n");
			if (gl==2)
			{
			
			printf("��ע���༭���밴5\n");
			printf("��������밴6\n");
			}
			else
			{
			
			printf("��ע���༭���밴5�����ã�\n");
			printf("��������밴6�����ã�\n");
			}
			printf("����Ļ�����밴7\n");
			if (gl==1||gl==2)
			{
				printf("ȷ���ػ��밴8\n");
				printf("ȡ���ػ��밴9\n");
		
				
			}
			else
			{
				printf("ȷ���ػ��밴8(����)\n");
				printf("ȡ���ػ��밴9(����)\n");
			}
			printf("���Windows�밴10\n");
			printf("Զ�����������밴11\n");
			printf("����ģʽ�밴12\n");
			printf("�򿪿�ݳ����밴13\n");
			printf("����ҳ�밴14\n");
		}
		else
		{
			if(y==3)
			{
				printf("����ָ���1.2.4����\n"); 
				j();
			 } 
			 else
			 {
			 	if(y==4)
			 	{
			 	e();	
				 }
				 else
				 {
				 	if(y==5&&gl==2)
				 	{
				 		r();
					 }
					 else
					 {
					 	if(y==6&&gl==2)
						 {
						 g();	
						  } 
						  else
						  {
						  	if(y==7)
						  	{
						  		o();
							  }
							  else
							  {
							  	if(y==8&&gl==1)
								{
									t();
								} 
								 else
								 {
								 if(y==9&&gl==1)
								 {
								 	q();
									}
									else
									{
										
										if(kj>=5)
										{
											printf("�벻ҪϷŪ�����򣡣�");
										  
								 	 }
									 else
										 {
										 	if(y==10)
												  {
												  	w();
												   } 
												   else
												   {
												   	if(y==11)
													{
													rt();	
													 } 
												   	else
													   {
													   	if(y==12)
													   	{
													   		i(); 
														   }
														   else
														   {
														   	if(y==13)
														   	{
														   		d(); 
															   }
															   else
															   {
															   	if(y==14)
																   {
																   	wycom();
																	} 
																	else
																	{
																		kj++;
															   	printf("��%d��",kj); 
																	}
															   	
															   }
														   }
														} 
											   		}
										 }
										  
									 }
									}
						  }
					 	
					  } 
				 }
			 }
			
		 } 
	}
}

}
}


int n()
{
	int f,l,bz,k;
	char y[9999],z[9999],c,n;
	while(k!=1)
	{ 
	printf("֧���ַ�,����,��ĸ,����,�ո�����,���뽨��8λ����,��ĸ�����ֻ�� 	�ƽ����루1���������루2��\n��");
	scanf("%d",&f);
	system("cls");
	if(f==1)
	{
	printf("�������������֣�\n:");//wh`ngt`0121
	scanf("%d",&f);
	system("cls");
	if(f==0)
	{
	printf("�����������ַ������֡���ĸ������\n:");
	gets(y+1);
	l=strlen(y+1);
		for(int i=1;i<=l;i++)
		{
			if(y[i]==0)
			{
				y[i]=9;
			}
			else
			{
				y[i]=y[i]-1;
			}
		}
		printf("����ɣ��Ƿ񵼳�����y:yes n:no)\n:");
		 scanf("%s",&c);
		 if(c=='y')
		 {
		 	for(int i=1;i<=l-1;i++)
			{
				printf("%c",y[i]);
			}
			cout<<"\n";
			printf("�����ɹ����븴�ơ�"); 
		  } 
		  else
		  {
		  	printf("�������������٣�"); 
		  }
		
	}
	else
	{
		if(f==1)
	{
	printf("�����������ַ������֡���ĸ������\n:");
	gets(y+1);
	l=strlen(y+1);
		for(int i=1;i<=l;i++)
		{
			if(y[i]==0)
			{
				y[i]=9;
			}
			else
			{
				y[i]=y[i]+1;
			}
		}
		printf("����ɣ��Ƿ񵼳�����y:yes n:no)\n:");
		 scanf("%s",&c);
		 if(c=='y')
		 {
		 	for(int i=1;i<=l-1;i++)
			{
				printf("%c",y[i]);
			}
			cout<<"\n";
			printf("�����ɹ����븴�ơ�"); 
		  } 
		  else
		  {
		  	printf("�������������٣�"); 
		  }
		
	}
		}	
	 } 
	 else
	 {
	 	printf("ÿ���ַ������֡���ĸ������,��1��������'1'����1��������'0'��\n:");
	 	scanf("%d",&bz);
	 	system("cls");
	 	if(bz==0)
	 	{
	 		printf("������Ҫ���ܵ��ַ������֡���ĸ������\n:");
			gets(y+1); 
			l=strlen(y+1);
			for(int i=1;i<=l;i++)
			{
				if(y[i]=='9')
				{
					z[i]='0';
				} 
				else
				{
				z[i]=y[i]+1;	
				}
				
			}
			z[l+1]='0';
		 }
		 else
		 {
		 	printf("������Ҫ���ܵ��ַ������֡���ĸ������\n:");
			gets(y+1);
			l=strlen(y+1);
			for(int i=1;i<=l;i++)
			{
			if(y[i]=='0')
				{
					z[i]='9';
				} 
				else
				{
				z[i]=y[i]-1;	
				}
			}
			z[l+1]='1';	
		 }
		 printf("����ɣ��Ƿ񵼳�����y:yes n:no��\n:");
		 scanf("%s",&c);
		 system("cls");
		 if(c=='y')
		 {
		 	for(int i=1;i<=l+1;i++)
			{
				printf("%c",z[i]);
			}
			cout<<"\n";
			printf("�����ɹ����븴�ơ�(���һλ����Ϊ�ƽ�����ʱ���ж��ַ�,��һ�븴��!)"); 
		  } 
		  else
		  {
		  	printf("�������������٣�"); 
		  	for(int i=1;i<=l+1;i++)
			{
				z[i]='0';
			}
		  }
	 }
	 
	 printf("\n��������������������������������������������������������������������������������������������������������������������������������\n����,Ҫ��Ҫ�رճ���(y:Ҫ/n:��Ҫ)\n:");
		 scanf("%s",&c);
		 if(c=='n')
		 {
		 	system("cls");
		 }
		 else
		 {
		 	k=1;
		 }
	}
	
	return 0;
	
}
int s()
{
	double o[10];
	char y[3],s,c,g[10],l[10];
	int k=0;
	while(k!=1)
	{
		printf("�ӷ�����+ ��������- �˷�����* ��������/ \n�����ӷ�����f+ ������������f-\n");
		scanf("%s",y+1);
		if(y[1]=='+')
		{
			printf("��һ������ �ڶ�������\n:");
			scanf("%lf%lf",&o[1],&o[2]);
			printf("%g",o[1]+o[2]);
		 } 
		 else
		 {
			 	if(y[1]=='-')
				{
					printf("��һ������ �ڶ�������\n:");
					scanf("%lf%lf",&o[1],&o[2]);
					printf("%g",o[1]-o[2]);
				 } 
			 else
			 {
			 		if(y[1]=='*')
					{
						printf("��һ������ �ڶ�������\n:");
						scanf("%lf%lf",&o[1],&o[2]);
						printf("%g",o[1]*o[2]);
					 } 
				 else
				 {
				 		if(y[1]=='/')
						{
							printf("��һ������ �ڶ�������\n:");
							scanf("%lf%lf",&o[1],&o[2]);
							printf("%g",o[1]/o[2]);
						 }
						 else
						 {
						 	if(y[1]=='f'&&y[2]=='-')
							{
								printf("��һ������֮��\n:");
								scanf("%d%d",&g[1],&l[1]);
								printf("�ڶ�������֮��\n:");
								scanf("%d%d",&g[2],&l[2]);
								printf("%d\n--\n%d",(g[1]*l[2]-g[2]*l[1]),(l[2]*l[1])); 
							 } 
							 else
							 {
								 	if(y[1]=='f'&&y[2]=='+')
									{
										printf("��һ������֮��\n:");
										scanf("%d%d",&g[1],&l[1]);
										printf("�ڶ�������֮��\n:");
										scanf("%d%d",&g[2],&l[2]);
										printf("%d\n--\n%d",(g[1]*l[2]+g[2]*l[1]),(l[2]*l[1])); 
										
									 }
						 }		 
				 }
			 }
		 }
		
	}
	printf("\n��������������������������������������������������������������������������������������������������������������������������������\n����,Ҫ��Ҫ�رճ���(y:Ҫ/n:��Ҫ)\n:");
		 scanf("%s",&c);
		 if(c=='n')
		 {
		 	system("cls");
		 }
		 else
		 {
		 	k=1;
		 }
	 
}
return 0;
}
void brc()
{
	system("cls");
	int jy=1;
	int sy=3; 
	srand((int)time(0));
	int n=rand()%15+1;
	cout<<"                                ����"<<n<<"��"<<endl;
	cout<<"                               ���ڷ������"<<endl;
	Sleep(1500);
	int m[20];
	for(int i=1;i<=15;i++)
		m[i]=1;
	int s[20]={0};
	int yy[20]={0};
	int l=0,w=0,j=0,p=0;
	for(int i=1;i<=15;i++)
	{
		do
		{
			int a=rand()%4+1;
			if(a==1&&l<2)
			{
			 
				l++;
				s[i]=1;
			}
			else if(a==2&&w<2)
			{
				w++;
				s[i]=2;
			}
			else if(a==4&&p<1)
			{
				p++;
				s[i]=4;
			}
			else if(a==3&&j<10)
			{
				j++;
				s[i]=3;
			}
		}
		while(s[i]==0);
	}
	if(s[n]==1)
		cout<<"                               ����>>ɱ��<<"<<endl;
	else if(s[n]==2)
		cout<<"                               ����>>Ԥ�Լ�<<"<<endl;
	else if(s[n]==3)
		cout<<"                               ����>>ƽ��<<"<<endl;
	else
		cout<<"                               ����>>Ů��<<"<<endl;
	cout<<"                             ��Ϸ����5���ʼ"<<endl; 
	Sleep(5000);
	int c=15;
	int f=0,flag=0;
	int day=1;
	int lr;
	int tp[20]={0};
	do
	{
		lr=0;
		system("cls");
		cout<<"                                 ��"<<day<<"��ʼ"<<endl;
		int x;
		for(int i=1;i<=15;i++) 
		{
			if(i==n&&m[n]==1)
			{
				if(s[n]==1)
				{
					cout<<"                                 ����ɱ��"<<endl;
					for(int j=1;j<=15;j++)
						if(m[j]==1&&s[j]!=1)
							cout<<j<<" ";
					cout<<endl;
					cout<<"                                 ��ѡ��ɱ��"<<endl; 
					int a;
					scanf("%d",&a);
					m[a]=0;
					cout<<endl;
					cout<<"                                 ɱ��ɱ��"<<a<<"��"; 
					if(s[a]==1)
						cout<<"(ɱ��)"<<endl;
					else if(s[a]==2)
						cout<<"(Ԥ�Լ�)"<<endl;
					else if(s[a]==3)
						cout<<"(ƽ��)"<<endl;
					else
						cout<<"(Ů��)"<<endl;
					c--;
				}	
				else if(s[n]==2)
				{
					cout<<"                                 ����Ԥ�Լ�"<<endl;
					cout<<"                               ";
					for(int j=1;j<=15;j++)
						if(m[j]==1)
							cout<<j<<" ";
					cout<<endl;
					cout<<"                              ��ѡ��Ԥ��˭�����"<<endl;
					int a;
					scanf("%d",&a);
					if(s[a]==1)
					{
						cout<<"                        "<<a<<"����ɱ�֣���ע��"<<endl;
						Sleep(1000);
					}
					else
						cout<<"                            "<<a<<"����ƽ��"<<endl; 
				}
			}
			else if(s[i]==1&&m[i]==1)
			{
				int a;
				do
				{
					a=rand()%15+1;
				}
				while(a==i||m[a]==0||s[a]==1);
				cout<<"                           ɱ��ɱ����"<<a<<"��"; 
				if(s[a]==1)
					cout<<"(ɱ��)"<<endl;
				else if(s[a]==2)
					cout<<"(Ԥ�Լ�)"<<endl;
				else if(s[a]==3)
					cout<<"(ƽ��)"<<endl;
				else
					cout<<"(Ů��)"<<endl;
				m[a]=0;
				c--;
			}
			else if(s[i]==2)
			{
				if(flag==0||m[flag]==0)
				{
					int a;
					do
					{
						a=rand()%15+1;
					}
					while(a==i||m[a]==0);
					if(s[a]==1)
						yy[a]=1;	
					else if(s[a]==3)
						yy[a]=3;
				}	
			}
			else if(s[i]==4)
			{
				f=0;
				while(f==0)
				{
					int a;
					a=rand()%2+1;
					if(a==1)
					{
						if(sy>0)
						{
							sy--;
							f=1; 
							int b;
							do
							{
								b=rand()%15+1;
								b=rand()%15+1;
							}
							while(b==i||m[b]==0);
							m[b]=0;
							cout<<"                           Ů�׶�����"<<b<<"��"; 
							if(s[b]==1)
								cout<<"(ɱ��)"<<endl;
							else if(s[b]==2)
								cout<<"(Ԥ�Լ�)"<<endl;
							else if(s[b]==3)
								cout<<"(ƽ��)"<<endl;
							c--;
						}
					}
					else if(a==2&&day>1)
					{
						if(jy>0)
						{
							jy--;
							f=1; 
							int b;
							do
							{
								b=rand()%15+1;
							}
							while(b==i||m[b]==1);
							c++;
							cout<<"                           Ů�׸�����"<<b<<"��"<<endl;
							m[b]=1;
						}
					}
					
				}
			}
		}
		if(s[n]==4)
		{
			cout<<"                                 ����Ů��"<<endl;
			cout<<"���״����"<<endl; 
			for(int j=1;j<=15;j++)
				if(m[j]==1)
					cout<<j<<" ";
			cout<<endl;
			cout<<"                        ��ѡ�� 1.* ɱ *���� 2.* �� *"<<endl;
			int a,f=0;
			while(f==0)
			{
				scanf("%d",&a);
				if(a==1)
				{
					if(sy>0)
					{
						sy--;
						f=1; 
						cout<<"                                ��ѡ����ɱ��"<<endl;
						for(int i=1;i<=15;i++)
							if(m[i]==1)
								cout<<i<<" ";
						cout<<endl; 
						int b;
						scanf("%d",&b);
						if(s[b]==1)
							cout<<"(ɱ��)"<<endl;
						else if(s[b]==2)
							cout<<"(Ԥ�Լ�)"<<endl;
						else if(s[b]==3)
							cout<<"(ƽ��)"<<endl;
						else
							cout<<"(Ů��)"<<endl;
						m[b]=0;
						c--; 
					}
					else
					{
						cout<<">>��ҩ<<����"<<endl; 
					}
				}
				else if(a==2)
				{
					if(jy>0)
					{
						jy--;
						f=1; 
						cout<<"��ѡ���˸���"<<endl;
						cout<<"����������"<<endl;
						for(int i=1;i<=15;i++)
							if(m[i]==0)
								cout<<i<<"��,���:"<<s[i]<<" "<<endl;;
						int b;
						scanf("%d",&b);
						m[b]=1;
						c++;
					}
					else
					{
						cout<<">>����ҩˮ<<����"<<endl; 
					}
				}
			}
		}
		
		
		Sleep(1000);
		double p[20]={0};
		cout<<"                                 ��"<<day<<"�����"<<endl;
		cout<<endl;
		if(m[n]==0)
		{
			cout<<"                             ���Ѿ�>>��<<��";	
			break;
		}
		
		cout<<"                                    ��"<<endl;
		cout<<"                       ";
		for(int i=1;i<=15;i++)
			if(m[i]==1)
				cout<<i<<" ";
		cout<<endl;
		cout<<"                                    ��ͶƱ...."<<endl;
		for(int i=1;i<=15;i++)
		{
			if(i==n&&m[n]==1)
			{
				cout<<endl;
				cout<<"                                 ��ѡ��Ͷ����"<<endl; 
				int a=99;
				while(a==99) 
				{
					scanf("%d",&a);
					if(a==99)
						for(int i=1;i<=15;i++)
							if(m[i]==1)
								cout<<"                                    "<<i<<"."<<s[i]<<endl;
				}
				if(s[i]==3&&day>4)
					p[a]+=1.5;
				else
					p[a]++;	
				cout<<endl;
				cout<<"                                    "<<i<<"->"<<a<<endl;
				if(s[a]==3)
				{
					tp[a]=i;
				}
			}
			else if(s[i]==1&&m[i]==1)
			{
				int a;
				do
				{
					a=rand()%15+1;	
				}
				while(m[a]==0||a==i||s[a]==1);
				p[a]++;
				cout<<"                                    "<<i<<"->"<<a<<endl;
				if(s[a]==3)
				{
					tp[a]=i;
				}
			}
			else if(s[i]==2&&m[i]==1)
			{
				if(flag!=0)
				{
					p[f]++;
					cout<<"                                    "<<i<<"->"<<flag<<endl;
				}
				else
				{
					int a;
					do
					{
						a=rand()%15+1;	
					}
					while(m[a]==0||a==i||yy[a]==3);
					p[a]++;
					if(s[a]==3)	
					{
						tp[a]=i;
					}
					cout<<"                                    "<<i<<"->"<<a<<endl;
				}
			} 
			else if(s[i]==3&&m[i]==1)
			{
				if(tp[i]==0)
				{
					int a;
					do
					{
						a=rand()%15+1;	
					}
					while(m[a]==0||a==i);
					p[a]++;
					cout<<"                                    "<<i<<"->"<<a<<endl;
				}
				else
				{
					if(m[tp[i]]==1)
					{
						p[tp[i]]++;
						cout<<"                                    "<<i<<"->"<<tp[i]<<endl;
					}
					else
					{
						int a;
						do
						{
							a=rand()%15+1;	
						}
						while(m[a]==0||a==i);
						p[a]++;
						cout<<"                                    "<<i<<"->"<<a<<endl;
					}
				}
			}
			else if(s[i]==4&&m[i]==1)
			{
				int a;
				do
				{
					a=rand()%15+1;	
				}
				while(m[a]==0||a==i);
				p[a]++;
				cout<<"                                    "<<i<<"->"<<a<<endl;
			}
		}
		system("cls");
		cout<<"                                 ͶƱ�����"<<endl;
		for(int i=1;i<=15;i++)
			if(m[i]==1)
				cout<<"                                 "<<i<<"��"<<"  Ʊ����"<<p[i]<<endl; 
		int sw,max=-100; 
		for(int i=1;i<=15;i++)
		{
			if(p[i]>max)
			{
				sw=i;
				max=p[i];
			}
		}
		m[sw]=0;
		cout<<"                                  "<<sw<<"����"<<endl;
		c--;
		cout<<"                              "<<sw<<"�ŵ������"; 
		if(s[sw]==1)
			cout<<"ɱ��"<<endl;
		else if(s[sw]==2)
			cout<<"Ԥ�Լ�"<<endl;
		else if(s[sw]==3)
			cout<<"ƽ��"<<endl;
		else 
			cout<<"Ů��"<<endl; 
		day++;  
		if(s[n]!=1)   
		{
			for(int i=1;i<=15;i++)
			if(s[i]==1&&m[i]==1)
				lr=1;
		}
		else
		{
			if(s[n]==1&&c==2)
				lr=0;
		}
		system("pause"); 
		cout<<endl;
	}
	while(m[n]==1&&c>1);
	  cout<<"                                             ��Ϸ����"<<endl;
}
void initialWindow(HANDLE hOut)
{
    SetConsoleTitle("����˹����");
    COORD size = { 80, 25 };
    SetConsoleScreenBufferSize(hOut, size);
    SMALL_RECT rc = { 0, 0, 79, 24 };
    SetConsoleWindowInfo(hOut, true, &rc);
    CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
    SetConsoleCursorInfo(hOut, &cursor_info);
}

void initialPrint(HANDLE hOut)
{
    SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    for (int i = 0; i < 20; ++i)
    {
        cout << "��                    ����                      ��" << endl;
    }
    gotoXY(hOut, 26, 0);
    cout << "������������";
    gotoXY(hOut, 0, 20);
    cout << "��������������������������������������";
    gotoXY(hOut, 26, 1);
    cout << "��    ����      ";
    gotoXY(hOut, 26, 2);
    cout << "��    ����      ";
    gotoXY(hOut, 26, 4);
    cout << "��һ���飺";
    gotoXY(hOut, 26, 9);
    cout << "����������";
    gotoXY(hOut, 30, 11);
    cout << "������ת �����ٽ�";
    gotoXY(hOut, 30, 12);
    cout << "�������� ��������";
    gotoXY(hOut, 30, 13);
    cout << "�ո������ʼ/��ͣ";
    gotoXY(hOut, 30, 14);
    cout << "Esc �����˳�";
    gotoXY(hOut, 26, 16);
    cout << "��    �ڣ�";
    gotoXY(hOut, 30, 18);
    cout << "����˹����V1.0";
    gotoXY(hOut, 35, 19);
    cout << "���ߣ�ת��";
}

void gotoXY(HANDLE hOut, int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hOut, pos);
}

void roundBlock(HANDLE hOut, int block[4][4])
{
    clearBlock(hOut, block, 5, 15);
    switch (rand() % 19)
    {
    case 0:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block00[i][j];
            }
        }
        break;
    case 1:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block01[i][j];
            }
        }
        break;
    case 2:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block02[i][j];
            }
        }
        break;
    case 3:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block03[i][j];
            }
        }
        break;
    case 4:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block04[i][j];
            }
        }
        break;
    case 5:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block05[i][j];
            }
        }
        break;
    case 6:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block06[i][j];
            }
        }
        break;
    case 7:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block07[i][j];
            }
        }
        break;
    case 8:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block08[i][j];
            }
        }
        break;
    case 9:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block09[i][j];
            }
        }
        break;
    case 10:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block10[i][j];
            }
        }
        break;
    case 11:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block11[i][j];
            }
        }
        break;
    case 12:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block12[i][j];
            }
        }
        break;
    case 13:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block13[i][j];
            }
        }
        break;
    case 14:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block14[i][j];
            }
        }
        break;
    case 15:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block15[i][j];
            }
        }
        break;
    case 16:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block16[i][j];
            }
        }
        break;
    case 17:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block17[i][j];
            }
        }
        break;
    case 18:
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                block[i][j] = block18[i][j];
            }
        }
        break;
    default:
        break;
    }
    printBlock(hOut, block, 5, 15);
}

bool collisionDetection(int block[4][4], int map[21][12], int x, int y)
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (x + i >= 0 && y + j >= 0 && map[x + i][y + j] == 1 && block[i][j] == 1)
            {
                return false;
            }
        }
    }
    return true;
}

void printBlock(HANDLE hOut, int block[4][4], int x, int y)
{
    switch (block[0][0])
    {
    case 10:
    case 11:
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
        break;
    case 12:
    case 13:
    case 14:
    case 15:
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        break;
    case 16:
    case 17:
    case 18:
    case 19:
        SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        break;
    case 20:
    case 21:
    case 22:
    case 23:
        SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        break;
    case 24:
    case 25:
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        break;
    case 26:
    case 27:
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        break;
    case 28:
        SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
        break;
    default:
        break;
    }
    for (int i = 0; i < 4; ++i)
    {
        if (i + x >= 0)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (block[i][j] == 1)
                {

                    gotoXY(hOut, 2 * (y + j), x + i);
                    cout << "��";
                }
            }
        }
    }
}

void clearBlock(HANDLE hOut, int block[4][4], int x, int y)
{
    for (int i = 0; i < 4; ++i)
    {
        if (i + x >= 0)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (block[i][j] == 1)
                {
                    gotoXY(hOut, 2 * (y + j), x + i);
                    cout << "  ";
                }
            }
        }
    }
}

void gameOver(HANDLE hOut, int block[4][4], int map[21][12])
{
    SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
    gotoXY(hOut, 9, 8);
    cout << "GAME OVER";
    gotoXY(hOut, 8, 9);
    cout << "�ո��������";
    gotoXY(hOut, 8, 10);
    cout << "ESC�����˳�";
    char key;
    while (true)
    {
        key = _getch();
        if (key == 32)
        {
            return;
        }
        if (key == 27)
        {
            exit(0);
        }
    }
}

int myDown(HANDLE hOut, int block[4][4], int map[21][12], int &x, int y)
{
    if (collisionDetection(block, map, x + 1, y))
    {
        clearBlock(hOut, block, x, y);
        ++x;
        return 0;
    }
    if (x < 0)
    {
        return 2;
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (block[i][j] == 1)
            {
                map[x + i][y + j] = 1;
                SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
                gotoXY(hOut, 2 * (y + j), x + i);
                cout << "��";
            }
        }
    }
    return 1;
}

void myLeft(HANDLE hOut, int block[4][4], int map[21][12], int x, int &y)
{
    if (collisionDetection(block, map, x, y - 1))
    {
        clearBlock(hOut, block, x, y);
        --y;
    }
}

void myRight(HANDLE hOut, int block[4][4], int map[21][12], int x, int &y)
{
    if (collisionDetection(block, map, x, y + 1))
    {
        clearBlock(hOut, block, x, y);
        ++y;
    }
}

void myUp(HANDLE hOut, int block[4][4], int map[21][12], int x, int &y)
{
    switch (block[0][0])
    {
    case 10:
        if (collisionDetection(block01, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block01[i][j];
                }
            }
        }
        break;
    case 11:
        if (collisionDetection(block00, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block00[i][j];
                }
            }
        }
        else if (collisionDetection(block00, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block00[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block00, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block00[i][j];
                }
            }
            ++y;
        }
        else if (collisionDetection(block00, map, x, y - 2))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block00[i][j];
                }
            }
            y = y - 2;
        }
        else if (collisionDetection(block00, map, x, y + 2))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block00[i][j];
                }
            }
            y = y + 2;
        }
        break;
    case 12:
        if (collisionDetection(block03, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block03[i][j];
                }
            }
        }
        else if (collisionDetection(block03, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block03[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block03, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block03[i][j];
                }
            }
            ++y;
        }
        break;
    case 13:
        if (collisionDetection(block04, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block04[i][j];
                }
            }
        }
        else if (collisionDetection(block04, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block04[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block04, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block04[i][j];
                }
            }
            ++y;
        }
        break;
    case 14:
        if (collisionDetection(block05, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block05[i][j];
                }
            }
        }
        else if (collisionDetection(block05, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block05[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block05, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block05[i][j];
                }
            }
            ++y;
        }
        break;
    case 15:
        if (collisionDetection(block02, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block02[i][j];
                }
            }
        }
        else if (collisionDetection(block02, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block02[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block02, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block02[i][j];
                }
            }
            ++y;
        }
        break;

    case 16:
        if (collisionDetection(block07, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block07[i][j];
                }
            }
        }
        else if (collisionDetection(block07, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block07[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block07, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block07[i][j];
                }
            }
            ++y;
        }
        break;
    case 17:
        if (collisionDetection(block08, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block08[i][j];
                }
            }
        }
        else if (collisionDetection(block08, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block08[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block08, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block08[i][j];
                }
            }
            ++y;
        }
        break;
    case 18:
        if (collisionDetection(block09, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block09[i][j];
                }
            }
        }
        else if (collisionDetection(block09, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block09[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block09, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block09[i][j];
                }
            }
            ++y;
        }
        break;
    case 19:
        if (collisionDetection(block06, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block06[i][j];
                }
            }
        }
        else if (collisionDetection(block06, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block06[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block06, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block06[i][j];
                }
            }
            ++y;
        }
        break;
    case 20:
        if (collisionDetection(block11, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block11[i][j];
                }
            }
        }
        else if (collisionDetection(block11, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block11[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block11, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block11[i][j];
                }
            }
            ++y;
        }
        break;
    case 21:
        if (collisionDetection(block12, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block12[i][j];
                }
            }
        }
        else if (collisionDetection(block12, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block12[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block12, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block12[i][j];
                }
            }
            ++y;
        }
        break;
    case 22:
        if (collisionDetection(block13, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block13[i][j];
                }
            }
        }
        else if (collisionDetection(block13, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block13[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block13, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block13[i][j];
                }
            }
            ++y;
        }
        break;
    case 23:
        if (collisionDetection(block10, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block10[i][j];
                }
            }
        }
        else if (collisionDetection(block10, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block10[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block10, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block10[i][j];
                }
            }
            ++y;
        }
        break;
    case 24:
        if (collisionDetection(block15, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block15[i][j];
                }
            }
        }
        else if (collisionDetection(block15, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block15[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block15, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block15[i][j];
                }
            }
            ++y;
        }
        break;
    case 25:
        if (collisionDetection(block14, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block14[i][j];
                }
            }
        }
        else if (collisionDetection(block14, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block14[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block14, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block14[i][j];
                }
            }
            ++y;
        }
        break;
    case 26:
        if (collisionDetection(block17, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block17[i][j];
                }
            }
        }
        else if (collisionDetection(block17, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block17[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block17, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block17[i][j];
                }
            }
            ++y;
        }
        break;
    case 27:
        if (collisionDetection(block16, map, x, y))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block16[i][j];
                }
            }
        }
        else if (collisionDetection(block16, map, x, y - 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block16[i][j];
                }
            }
            --y;
        }
        else if (collisionDetection(block16, map, x, y + 1))
        {
            clearBlock(hOut, block, x, y);
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 4; ++j)
                {
                    block[i][j] = block16[i][j];
                }
            }
            ++y;
        }
        break;
    default:
        break;
    }
}

void myStop(HANDLE hOut, int block[4][4])
{
    clearBlock(hOut, block, 5, 15);
    SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
    gotoXY(hOut, 30, 7);
    cout << "��Ϸ��ͣ";
    char key;
    while (true)
    {
        key = _getch();
        if (key == 32)
        {
            gotoXY(hOut, 30, 7);
            cout << "        ";
            printBlock(hOut, block, 5, 15);
            return;
        }
        if (key == 27)
        {
            exit(0);
        }
    }
}

void eliminateRow(HANDLE hOut, int map[21][12], int &val, int &fraction, int &checkpoint)
{
    SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
    for (int i = 19; i >= 0; --i)
    {
        int x = 0;
        for (int j = 1; j < 11; ++j)
        {
            x += map[i][j];
        }
        if (x == 10)
        {
            fraction += 100;
            if (val > 1 && fraction / 1000 + 1 != checkpoint)
            {
                checkpoint = fraction / 1000 + 1;
                val -= 5;
            }
            for (int m = i; m > 0; --m)
            {
                for (int n = 1; n < 11; ++n)
                {
                    map[m][n] = map[m - 1][n];
                    gotoXY(hOut, 2 * n, m);
                    if (map[m][n] == 1)
                    {
                        cout << "��";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
            }
            ++i;
        }
    }
    gotoXY(hOut, 36, 1);
    cout << fraction;
    gotoXY(hOut, 36, 2);
    cout << checkpoint;
}
const int N = 15;       //15*15������
const char ChessBoard = ' ';  //���̱�־
const char flag1 = 'o';    //���1����Ա�־
const char flag2 = 'x';    //���2��־

typedef struct Position{    //����
    int row;        //��
    int col;        //��
}Position;

class GoBang{     //��������
public:
    GoBang(){
        InitChessBoard();      //��ʼ������
    }
    void Play(){      //����
        Position Play1;   //���1�����
        Position Play2;   //���2
        while (1){
            int mode = ChoiceMode();
            while (1){
                if (mode == 1){       //����VS���
                    ComputerChess(Play1, flag1);            //������
                    if (GetVictory(Play1, 0, flag1)){       //0������ԣ�Ϊ�����ʾ���Ի�ʤ
                        break;
                    }
                    PlayChess(Play2, 2, flag2);         //���2��
                    if (GetVictory(Play2, 2, flag2)){       //2�������2
                        break;
                    }
                }
                else{               //���1VS���2
                    PlayChess(Play1, 1, flag1);         //���1��
                    if (GetVictory(Play1, 1, flag1)){       //���1Ӯ
                        break;
                    }
                    PlayChess(Play2, 2, flag2);         //���2��
                    if (GetVictory(Play2, 2, flag2)){       //���2Ӯ
                        break;
                    }
                }
            }
            cout << "======����һ��=======" << endl;
            cout << "yes or no :";  
            char s[] = "yes";
            scanf("%d",&s);
            if (strcmp(s, "no") == 0){
                break;
            }
        }
    }

protected:
    void InitChessBoard(){          //��ʼ������
        for (int i = 0; i < N + 1; ++i){
            for (int j = 0; j < N + 1; ++j){
                _ChessBoard[i][j] = ChessBoard;
            }
        }
    }

    int ChoiceMode(){           //ѡ��ģʽ
        system("cls");
        //ϵͳ���ã�����
        InitChessBoard();       //���³�ʼ������
        cout << "*************************************************" << endl;
        cout << "******************0���˳�************************" << endl;
        cout << "******************1������VS���******************" << endl;
        cout << "******************2�����VS���******************" << endl;
        cout << "*************************************************" << endl;
        while (1){
            int i = 0;
            cout << "��ѡ��ģʽ��";
            scanf("%d",&i);
            if (i == 0){       //�˳�
                exit(1);
            }
            if (i == 1 || i == 2){
                return i;
            }
            else{
                cout << "�Ƿ����룬���������룡" << endl;
            }
        }
    }

    void PrintChessBoard(){        //��ӡ����
        printf("     1   2   3   4   5   6   7   8   9  10  11  12  13  14  15\n");
        printf("   |---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|\n");
        for (int i = 1; i < N + 1; ++i)
        {
            printf("%2d ", i);
            printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", _ChessBoard[i][1], _ChessBoard[i][2], _ChessBoard[i][3], _ChessBoard[i][4], _ChessBoard[i][5], _ChessBoard[i][6], _ChessBoard[i][7], _ChessBoard[i][8], _ChessBoard[i][9], _ChessBoard[i][10], _ChessBoard[i][11], _ChessBoard[i][12], _ChessBoard[i][13], _ChessBoard[i][14], _ChessBoard[i][15]);
            printf("   |---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|\n");
        }
        cout << endl;
    }

    void ComputerChess(Position& pos, char flag){     //������
        //PrintChessBoard();      //��ӡ����
        int x = 0;
        int y = 0;
        while (1){                    //ѭ�����ҿ�λ��
            x = (rand() % N) + 1;      //������1~N�������
            srand((unsigned int)time(NULL));
            y = (rand() % N) + 1;      //������1~N�������
            srand((unsigned int)time(NULL));
            if (_ChessBoard[x][y] == ChessBoard){       //������λ��Ϊ�գ�û�����ӣ�������ѭ��������
                break;
            }
        }
        pos.row = x;
        pos.col = y;
        _ChessBoard[pos.row][pos.col] = flag;
    }

    void PlayChess(Position& pos, int player, char flag){
        PrintChessBoard();      //��ӡ����
        while (1){
            printf("�����%d�������꣺", player);
            scanf("%d%d",&pos.row,&pos.col);
            if (JudgeValue(pos) == 1){        //�ж������Ƿ�Ϸ�
                break;
            }
            cout << "���겻�Ϸ������������룺" << endl;
        }
        _ChessBoard[pos.row][pos.col] = flag;
    }

    int JudgeValue(const Position& pos){       //�ж�����ĺϷ���
        //1.��������
        if (pos.row > 0 && pos.row <= N && pos.col > 0 && pos.col <= N){
            //2.����λ��Ϊ�գ�û�����ӣ�
            if (_ChessBoard[pos.row][pos.col] == ChessBoard){
                return 1;      //�Ϸ�
            } 
        }
        return 0;       //�Ƿ�
    }

    int JudgeVictory(Position pos, char flag){     //�ж��Ƿ�����һ�ʤ���ײ��жϣ�
        int begin = 0;
        int end = 0;

        //1.�ж����Ƿ���������
        (pos.col - 4) > 0 ? begin = (pos.col - 4) : begin = 1;
        (pos.col + 4) > N ? end = N : end = (pos.col + 4);
        for (int i = pos.row, j = begin; j + 4 <= end; ++j){
            if (_ChessBoard[i][j] == flag && _ChessBoard[i][j + 1] == flag &&
                _ChessBoard[i][j + 2] == flag && _ChessBoard[i][j + 3] == flag &&
                _ChessBoard[i][j + 4] == flag)
                return 1;
        }
        //2.�ж����Ƿ���������
        (pos.row - 4) > 0 ? begin = (pos.row - 4) : begin = 1;
        (pos.row + 4) > N ? end = N : end = (pos.row + 4);
        for (int j = pos.col, i = begin ; i + 4 <= end; ++i){
            if (_ChessBoard[i][j] == flag && _ChessBoard[i + 1][j] == flag &&
                _ChessBoard[i + 2][j] == flag && _ChessBoard[i + 3][j] == flag &&
                _ChessBoard[i + 4][j] == flag)
                return 1;
        }
        //3.�ж����Խ����Ƿ���������
        int len = 0;    //��Գ���
        int start = 0;
        int finish = 0;
        pos.row > pos.col ? len = pos.col - 1 : len = pos.row - 1;
        if (len > 4){
            len = 4;
        }
        begin = pos.row - len;       //��������ʼλ��
        start = pos.col - len;       //��������ʼλ��

        pos.row > pos.col ? len = N - pos.row : len = N - pos.col;
        if (len > 4){
            len = 4;
        }
        end = pos.row + len;         //���������λ��
        finish = pos.col + len;      //���������λ��

        for (int i = begin, j = start; (i + 4 <= end) && (j + 4 <= finish); ++i, ++j){
            if (_ChessBoard[i][j] == flag && _ChessBoard[i + 1][j + 1] == flag &&
                _ChessBoard[i + 2][j + 2] == flag && _ChessBoard[i + 3][j + 3] == flag &&
                _ChessBoard[i + 4][j + 4] == flag)
                return 1;
        }
        //4.�жϸ��Խ����Ƿ���������
        (pos.row - 1) > (N - pos.col) ? len = N - pos.col : len = pos.row - 1;
        if (len > 4){
            len = 4;
        }
        begin = pos.row - len;       //��������ʼλ��
        start = pos.col + len;       //��������ʼλ��

        (N - pos.row) > (pos.col - 1) ? len = pos.col - 1 : len = N - pos.row;
        if (len > 4){
            len = 4;
        }
        end = pos.row + len;         //���������λ��
        finish = pos.col - len;      //���������λ�� 
        for (int i = begin, j = start; (i + 4 <= end) && (j - 4 >= finish); ++i, --j){
            if (_ChessBoard[i][j] == flag && _ChessBoard[i + 1][j - 1] == flag &&
                _ChessBoard[i + 2][j - 2] == flag && _ChessBoard[i + 3][j - 3] == flag &&
                _ChessBoard[i + 4][j - 4] == flag)
                return 1;
        }
        //��λ�ò�δ����
        for (int x = 1; x < N + 1; ++x){
            for (int y = 1; y < N + 1; ++y){
                if (_ChessBoard[x][y] == ChessBoard){
                    return 0;       //δ����
                }
            }
        }
        return -1;      //�;�
    }

    bool GetVictory(Position& pos, int player, char flag){       //�жϾ�����λ���Ӯ
        if (JudgeVictory(pos, flag) != 0){    //�ж������˻�ʤ
            if (JudgeVictory(pos, flag) == 1){     //�ж��Ƿ����˻�ʤ,1��ʾ��ʤ
                PrintChessBoard();     //��ӡ����
                if (player == 0){
                    cout << "���Ի�ʤ��" << endl;
                }
                else{
                    printf("��ϲ���%d��ʤ��\n", player);
                }
            }
            else{
                printf("�;֣�\n");
            }
            return true;      //���˻�ʤ
        }   
        return false;         //û�˻�ʤ
    }

private:
    char _ChessBoard[N + 1][N + 1];    //����
};
int yx1()//����һ�£���Win+R����������������ļ����ƣ����Ƶ�ַ������������system�ϣ��Ϳ��Դ��ļ��� 
{
	printf("�򿪺�����������!\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++�ص��ļ�\\���Ʋ��[V2.2.1].exe");
} 
int yx2()
{
	printf("�򿪺�����������!\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++�ص��ļ�\\Untitled[IR]v1.6.0.exe");
} 
int yx3()
{
	printf("�򿪺����������У�\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++�ص��ļ�\\Untitled[Input]v1.2.0.exe");
}
int yx4()
{
	printf("�򿪺����������У�\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++�ص��ļ�\\������.exe");
}
int yx5()
{
	GoBang g;
    g.Play();
    system("pause");
    return 0;
	
}
int yx6()
{
	printf("�򿪺����������У�\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++�ص��ļ�\\RPG��Ϸ[V1.0.1].exe");
}
int yx7()
{
	printf("�򿪺����������У�\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++�ص��ļ�\\Untitled[�ҵ�����].exe");
}
int yx8()
{
	char y[100]="cls";
	system(y);
	int map[21][12];
    int blockA[4][4];//��ѡ���ķ���
    int blockB[4][4];//�����еķ���
    int positionX, positionY;//�������Ͻǵ�����
    bool check;//��鷽�黹�ܲ�������
    char key;//�����洢����
    int val;//�������������ٶ�
    int fraction;//�����洢�÷�
    int checkpoint;//�����洢�ؿ�
    int times;
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);//��ȡ��׼����豸���
    initialWindow(hOut);
initial:
    gotoXY(hOut, 0, 0);
    initialPrint(hOut);
    check = true;
    val = 50;
    fraction = 0;
    checkpoint = 1;
    times = val;
    for (int i = 0; i < 20; ++i)
    {
        for (int j = 1; j < 11; ++j)
        {
            map[i][j] = 0;
        }
    }
    for (int i = 0; i < 20; ++i)
    {
        map[i][0] = map[i][11] = 1;
    }
    for (int i = 0; i < 12; ++i)
    {
        map[20][i] = 1;
    }

    srand((unsigned)time(NULL));
    roundBlock(hOut, blockA);
    while (true)
    {
        if (check)
        {
            eliminateRow(hOut, map, val, fraction, checkpoint);
            check = false;
            positionX = -3;
            positionY = 4;
            if (collisionDetection(blockA, map, positionX, positionY))
            {
                for (int i = 0; i < 4; ++i)
                {
                    for (int j = 0; j < 4; ++j)
                    {
                        blockB[i][j] = blockA[i][j];
                    }
                }
                roundBlock(hOut, blockA);
            }
            else
            {
                gameOver(hOut, blockA, map);
                goto initial;
            }
        }
        printBlock(hOut, blockB, positionX, positionY);
        if (_kbhit())
        {
            key = _getch();
            switch (key)
            {
            case 72:
                myUp(hOut, blockB, map, positionX, positionY);
                break;
            case 75:
                myLeft(hOut, blockB, map, positionX, positionY);
                break;
            case 77:
                myRight(hOut, blockB, map, positionX, positionY);
                break;
            case 80:
                switch (myDown(hOut, blockB, map, positionX, positionY))
                {
                case 0:
                    check = false;
                    break;
                case 1:
                    check = true;
                    break;
                case 2:
                    gameOver(hOut, blockB, map);
                    goto initial;
                default:
                    break;
                }
                break;
            case 32:
                myStop(hOut, blockA);
                break;
            case 27:
                exit(0);
            default:
                break;
            }
        }
        Sleep(20);
        if (0 == --times)
        {
            switch (myDown(hOut, blockB, map, positionX, positionY))
            {
            case 0:
                check = false;
                break;
            case 1:
                check = true;
                break;
            case 2:
                gameOver(hOut, blockB, map);
                goto initial;
            default:
                break;
            }
            times = val;
        }
    }
    
    return 0;
}
int yx9()
{
	srand((int)time(0));  
	char a='1';
	while(1)
	{
		system("cls");
		cout<<"                                            ɱ����Ϸ"<<endl;
		cout<<"--------------------------------------------------------------------------------------";
		cout<<"                                                                    1.��ʼ��Ϸ"<<endl;
		cout<<"                                2.�鿴��Ϸ����"<<endl;
		a=getch();
		if(a=='1')
		{
			cout<<"                                  1. 15�˳�"<<endl;
			cout<<"                           2. 30������ս(10����)<�����ڴ�>"<<endl;
			a='2';
			while(a=='2')
			{
				a=getch();
				switch(a)
				{
					case '1':
						brc();
					break;
				}
				if(a=='1')
					break;
			}
			if(a=='1')
				break;
		}
		else if(a=='2')
		{
			cout<<"ɱ�֣�ÿ�����ϵ�ʱ���ʹ��ɱ��Ȩɱ��һ��"<<endl;//1
			cout<<"Ԥ�Լң�ÿ�����Ͽ���֪��һ���˵����"<<endl;//2 
			cout<<"ƽ���޼���,�������ƽ��ʱ���ڵ�5��ӵ��1.5Ʊ��ͶƱȨ"<<endl;//3
			cout<<"���ˣ�����ݽ�����30�����־��У�������ɴ���һ��"<<endl; 
			cout<<"ͶƱϸ��\n��Ϸ�г���������ȫ���ɳ���AI�˹�����"<<endl;
			cout<<"ɱ�ֲ���ɱ�����ѣ���������ͶƱ����"<<endl;
			cout<<"Ԥ�Լ����Ԥ�Ե�ɱ�ֽ�һֱ����ͶƱ�����Ԥ�Ե�ƽ����Զ�������ͶƱ"<<endl;
			cout<<"ƽ��Ͷ��һ�����϶���ͶƱ������"<<endl;
			cout<<"********���úó���AI��Ϸ�����ҳ�ɱ��**********"<<endl;
			system("pause");
		}
	}
	return 0;
}
int yx10()
{
	printf("�򿪺����������У�\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++�ص��ļ�\\����ǹս.exe");
}


int yx()
{
	printf("��ѡ����Ҫ�����Ϸ(1-���Ʋ��,2-IR��Ϸ,3-����С��Ϸ,4-������,5-������,6-˫��RPG��Ϸ,7-�ҵ�����,8-����˹���飬9-����ɱ��10-����ǹս):");
	int xzyx;
	scanf("%d",&xzyx);
	switch(xzyx)
	{
		case 1: yx1();break;
		case 2: yx2();break;
		case 3: yx3();break;
		case 4: yx4();break;
		case 5: yx5();break;
		case 6: yx6();break;
		case 7: yx7();break;
		case 8: yx8();break;
		case 9: yx9();break;
		case 10: yx10();break;
	}
}
int js()
{
	printf("\n");
	
	printf("-------------------Gickϵͳ-------------------\n");
	printf("�汾��Ϊ��Vita1.1.1��Ϊʮ�ֲ��ȶ��汾\n");
	printf("��Ʒ���ܣ�������Ĵ�������û���õ����飡\n");
	printf("-------------------[������־]--------------------\n");
	printf("Vita1.1.0:���������ڵ�Gick����Ϊʵ�ó���������İ汾\n"); 
	return 0;
}
int kt()
{
	printf("--------------------------------------\n");
	printf("--------------------Gick1.1.1-------------------\n");
	printf("---------------ӵ�а�Ȩ������Ϯ��-------------\n");
	printf("-----------���䣺jason29277@163.com-------\n");
	printf("����Ĭ��ģʽ,��������޷�ͨ����ȫ��������ֶ���\n");
	printf("���������Ҫ��������������ȷ����װ����װ������\n");
	printf("--------------------�˳���0-------------------\n");
	printf("---------------�����ƽ���������1----------------\n"); 
	printf("-----------------���Ƽ�������2------------------\n");
	printf("------------------Cmd����3--------------------\n");
	printf("------------����С��Ϸ������ת�أ���4------------\n");
	printf("-----------------������־��5--------------------\n");
	printf("---------------����������ɫ��6------------------\n");
	printf("-----------------�ڲ����7--------------------\n");
	printf("-----------------Bug��ڰ�8---------------------\n");
}
int wycom()
{
	char b[1000],y[1000];
	int f;
	printf("��ַ����Ϊhttp��1\n��ַ����Ϊhttps��2\n:");
	 scanf("%d",&f);
	 if(f==1)
	 {
	 	printf("��������ַ�磨�ٶȣ���www.baidu.com\n:");
		scanf("%s",y+1);
		string string2 = concTwoStrings("start http://",y+1,"/");
		strcpy(b, string2.c_str());
		system(b);
		printf("�˳���0");
		scanf("%d",&f);
		if(f==0)
		{
			return 0;
		 } 
	 }
	 else
	 {
	 	if(f==2)
	 	{
	 		printf("��������ַ�磨��Ӧ����cn.bing.com\n:");
			scanf("%s",y+1);
			string string2 = concTwoStrings("start https://",y+1,"/");
			strcpy(b, string2.c_str());
			system(b);
			printf("�˳���0");
			scanf("%d",&f);
			if(f==0)
			{
				return 0;
			 } 
		 }
	 }
	
	 
}

int zcbb()
{
	printf("��Ҫ�ı�����ʲô��ɫ��1-��ɫ��2-��ɫ��3-��ɫ��");
	int xzys;
	scanf("%d",&xzys);
	switch(xzys)
	{
		case 1:system("color 00");break;
		case 2:system("color 07");break;
		case 3:system("color 08");break;
	}
	return 0;
}  
