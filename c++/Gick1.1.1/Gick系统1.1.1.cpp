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
int gl=0;//管理 
int y;//输入 
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

void initialWindow(HANDLE hOut);//初始化窗口
void initialPrint(HANDLE hOut);//初始化界面
void gotoXY(HANDLE hOut, int x, int y);//移动光标
void roundBlock(HANDLE hOut, int block[4][4]);//随机生成方块并打印到下一个方块位置
bool collisionDetection(int block[4][4], int map[21][12], int x, int y);//检测碰撞
void printBlock(HANDLE hOut, int block[4][4], int x, int y);//打印方块
void clearBlock(HANDLE hOut, int block[4][4], int x, int y);//消除方块
void myLeft(HANDLE hOut, int block[4][4], int map[21][12], int x, int &y);//左移
void myRight(HANDLE hOut, int block[4][4], int map[21][12], int x, int &y);//右移
void myUp(HANDLE hOut, int block[4][4], int map[21][12], int x, int &y);//顺时针旋转90度
int myDown(HANDLE hOut, int block[4][4], int map[21][12], int &x, int y);//加速下落
void myStop(HANDLE hOut, int block[4][4]);//游戏暂停
void gameOver(HANDLE hOut, int block[4][4], int map[21][12]);//游戏结束
void eliminateRow(HANDLE hOut, int map[21][12], int &val, int &fraction, int &checkpoint);//判断是否能消行并更新分值
int main()
{
	system("color 0a");
	system("title Gick系统");  // 标题
	int e;
	while(1)
	{
		
		kt();
		printf("请输入你的选择：");
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
					printf("已开启破解模式\n");
					printf("已为您开启部分修改权限\n");
					gl=1;
					system("pause");
					m();
				}
				else
				{
					if(y==416)
					{
						printf("已开启管理员模式\n");
						printf("已为您开启全部修改权限\n");
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
									  	printf("无此程序");
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
    printf("10秒后您的电脑将会自动关机\n"); 
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
    printf("快捷程序路径\n:"); 
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


	printf("退出按0\n"); 
	printf("ping指令请按1\n");
	printf("清屏命令请按2\n");
	printf("打开计算器请按3\n");
	printf("打开资源管理器请按4\n");
	if (gl==2)
	{
	
	printf("打开注册表编辑器请按5\n");
	printf("打开组策略请按6\n");
	}
	else
	{
	
	printf("打开注册表编辑器请按5（禁用）\n");
	printf("打开组策略请按6（禁用）\n");
	}
	printf("打开屏幕键盘请按7\n");
	if (gl==1||gl==2)
	{
		printf("确定关机请按8\n");
		printf("取消关机请按9\n");

		
	}
	else
	{
		printf("确定关机请按8(禁用)\n");
		printf("取消关机请按9(禁用)\n");
	}
	printf("检查Windows请按10\n");
	printf("远程桌面连接请按11\n");
	printf("画板模式请按12\n");
	printf("打开快捷程序请按13\n");
	printf("打开网页请按14\n");
	while(1)
	{
		printf("输入你的选择:"); 
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

			printf("退出按0\n"); 
			printf("ping指令请按1\n");
			printf("清屏命令请按2\n");
			printf("打开计算器请按3\n");
			printf("打开资源管理器请按4\n");
			if (gl==2)
			{
			
			printf("打开注册表编辑器请按5\n");
			printf("打开组策略请按6\n");
			}
			else
			{
			
			printf("打开注册表编辑器请按5（禁用）\n");
			printf("打开组策略请按6（禁用）\n");
			}
			printf("打开屏幕键盘请按7\n");
			if (gl==1||gl==2)
			{
				printf("确定关机请按8\n");
				printf("取消关机请按9\n");
		
				
			}
			else
			{
				printf("确定关机请按8(禁用)\n");
				printf("取消关机请按9(禁用)\n");
			}
			printf("检查Windows请按10\n");
			printf("远程桌面连接请按11\n");
			printf("画板模式请按12\n");
			printf("打开快捷程序请按13\n");
			printf("打开网页请按14\n");
		}
		else
		{
			if(y==3)
			{
				printf("本条指令待1.2.4开启\n"); 
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
											printf("请不要戏弄本程序！！");
										  
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
															   	printf("第%d次",kj); 
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
	printf("支持字符,数字,字母,中文,空格密码,密码建议8位以上,字母和数字混搭 	破解密码（1）生成密码（2）\n：");
	scanf("%d",&f);
	system("cls");
	if(f==1)
	{
	printf("请输入最后的数字！\n:");//wh`ngt`0121
	scanf("%d",&f);
	system("cls");
	if(f==0)
	{
	printf("请输入所有字符、数字、字母、中文\n:");
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
		printf("已完成，是否导出？（y:yes n:no)\n:");
		 scanf("%s",&c);
		 if(c=='y')
		 {
		 	for(int i=1;i<=l-1;i++)
			{
				printf("%c",y[i]);
			}
			cout<<"\n";
			printf("导出成功！请复制。"); 
		  } 
		  else
		  {
		  	printf("不导出，已销毁！"); 
		  }
		
	}
	else
	{
		if(f==1)
	{
	printf("请输入所有字符、数字、字母、中文\n:");
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
		printf("已完成，是否导出？（y:yes n:no)\n:");
		 scanf("%s",&c);
		 if(c=='y')
		 {
		 	for(int i=1;i<=l-1;i++)
			{
				printf("%c",y[i]);
			}
			cout<<"\n";
			printf("导出成功！请复制。"); 
		  } 
		  else
		  {
		  	printf("不导出，已销毁！"); 
		  }
		
	}
		}	
	 } 
	 else
	 {
	 	printf("每个字符、数字、字母、中文,进1（请输入'1'）退1（请输入'0'）\n:");
	 	scanf("%d",&bz);
	 	system("cls");
	 	if(bz==0)
	 	{
	 		printf("请输入要加密的字符、数字、字母、中文\n:");
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
		 	printf("请输入要加密的字符、数字、字母、中文\n:");
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
		 printf("已完成，是否导出？（y:yes n:no）\n:");
		 scanf("%s",&c);
		 system("cls");
		 if(c=='y')
		 {
		 	for(int i=1;i<=l+1;i++)
			{
				printf("%c",z[i]);
			}
			cout<<"\n";
			printf("导出成功！请复制。(最后一位数字为破解密码时的判断字符,请一齐复制!)"); 
		  } 
		  else
		  {
		  	printf("不导出，已销毁！"); 
		  	for(int i=1;i<=l+1;i++)
			{
				z[i]='0';
			}
		  }
	 }
	 
	 printf("\n————————————————————————————————————————————————————————————————\n请问,要不要关闭程序？(y:要/n:不要)\n:");
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
		printf("加法输入+ 减法输入- 乘法输入* 除法输入/ \n分数加法输入f+ 分数减法输入f-\n");
		scanf("%s",y+1);
		if(y[1]=='+')
		{
			printf("第一个数字 第二个数字\n:");
			scanf("%lf%lf",&o[1],&o[2]);
			printf("%g",o[1]+o[2]);
		 } 
		 else
		 {
			 	if(y[1]=='-')
				{
					printf("第一个数字 第二个数字\n:");
					scanf("%lf%lf",&o[1],&o[2]);
					printf("%g",o[1]-o[2]);
				 } 
			 else
			 {
			 		if(y[1]=='*')
					{
						printf("第一个数字 第二个数字\n:");
						scanf("%lf%lf",&o[1],&o[2]);
						printf("%g",o[1]*o[2]);
					 } 
				 else
				 {
				 		if(y[1]=='/')
						{
							printf("第一个数字 第二个数字\n:");
							scanf("%lf%lf",&o[1],&o[2]);
							printf("%g",o[1]/o[2]);
						 }
						 else
						 {
						 	if(y[1]=='f'&&y[2]=='-')
							{
								printf("第一个几分之几\n:");
								scanf("%d%d",&g[1],&l[1]);
								printf("第二个几分之几\n:");
								scanf("%d%d",&g[2],&l[2]);
								printf("%d\n--\n%d",(g[1]*l[2]-g[2]*l[1]),(l[2]*l[1])); 
							 } 
							 else
							 {
								 	if(y[1]=='f'&&y[2]=='+')
									{
										printf("第一个几分之几\n:");
										scanf("%d%d",&g[1],&l[1]);
										printf("第二个几分之几\n:");
										scanf("%d%d",&g[2],&l[2]);
										printf("%d\n--\n%d",(g[1]*l[2]+g[2]*l[1]),(l[2]*l[1])); 
										
									 }
						 }		 
				 }
			 }
		 }
		
	}
	printf("\n————————————————————————————————————————————————————————————————\n请问,要不要关闭程序？(y:要/n:不要)\n:");
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
	cout<<"                                你是"<<n<<"号"<<endl;
	cout<<"                               正在分配身份"<<endl;
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
		cout<<"                               你是>>杀手<<"<<endl;
	else if(s[n]==2)
		cout<<"                               你是>>预言家<<"<<endl;
	else if(s[n]==3)
		cout<<"                               你是>>平民<<"<<endl;
	else
		cout<<"                               你是>>女巫<<"<<endl;
	cout<<"                             游戏将在5秒后开始"<<endl; 
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
		cout<<"                                 第"<<day<<"晚开始"<<endl;
		int x;
		for(int i=1;i<=15;i++) 
		{
			if(i==n&&m[n]==1)
			{
				if(s[n]==1)
				{
					cout<<"                                 你是杀手"<<endl;
					for(int j=1;j<=15;j++)
						if(m[j]==1&&s[j]!=1)
							cout<<j<<" ";
					cout<<endl;
					cout<<"                                 你选择杀掉"<<endl; 
					int a;
					scanf("%d",&a);
					m[a]=0;
					cout<<endl;
					cout<<"                                 杀手杀了"<<a<<"号"; 
					if(s[a]==1)
						cout<<"(杀手)"<<endl;
					else if(s[a]==2)
						cout<<"(预言家)"<<endl;
					else if(s[a]==3)
						cout<<"(平民)"<<endl;
					else
						cout<<"(女巫)"<<endl;
					c--;
				}	
				else if(s[n]==2)
				{
					cout<<"                                 你是预言家"<<endl;
					cout<<"                               ";
					for(int j=1;j<=15;j++)
						if(m[j]==1)
							cout<<j<<" ";
					cout<<endl;
					cout<<"                              你选择预言谁的身份"<<endl;
					int a;
					scanf("%d",&a);
					if(s[a]==1)
					{
						cout<<"                        "<<a<<"号是杀手，请注意"<<endl;
						Sleep(1000);
					}
					else
						cout<<"                            "<<a<<"号是平民"<<endl; 
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
				cout<<"                           杀手杀掉了"<<a<<"号"; 
				if(s[a]==1)
					cout<<"(杀手)"<<endl;
				else if(s[a]==2)
					cout<<"(预言家)"<<endl;
				else if(s[a]==3)
					cout<<"(平民)"<<endl;
				else
					cout<<"(女巫)"<<endl;
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
							cout<<"                           女巫毒死了"<<b<<"号"; 
							if(s[b]==1)
								cout<<"(杀手)"<<endl;
							else if(s[b]==2)
								cout<<"(预言家)"<<endl;
							else if(s[b]==3)
								cout<<"(平民)"<<endl;
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
							cout<<"                           女巫复活了"<<b<<"号"<<endl;
							m[b]=1;
						}
					}
					
				}
			}
		}
		if(s[n]==4)
		{
			cout<<"                                 你是女巫"<<endl;
			cout<<"存活状况："<<endl; 
			for(int j=1;j<=15;j++)
				if(m[j]==1)
					cout<<j<<" ";
			cout<<endl;
			cout<<"                        你选择 1.* 杀 *还是 2.* 救 *"<<endl;
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
						cout<<"                                你选择了杀人"<<endl;
						for(int i=1;i<=15;i++)
							if(m[i]==1)
								cout<<i<<" ";
						cout<<endl; 
						int b;
						scanf("%d",&b);
						if(s[b]==1)
							cout<<"(杀手)"<<endl;
						else if(s[b]==2)
							cout<<"(预言家)"<<endl;
						else if(s[b]==3)
							cout<<"(平民)"<<endl;
						else
							cout<<"(女巫)"<<endl;
						m[b]=0;
						c--; 
					}
					else
					{
						cout<<">>毒药<<不足"<<endl; 
					}
				}
				else if(a==2)
				{
					if(jy>0)
					{
						jy--;
						f=1; 
						cout<<"你选择了复活"<<endl;
						cout<<"阵亡名单："<<endl;
						for(int i=1;i<=15;i++)
							if(m[i]==0)
								cout<<i<<"号,身份:"<<s[i]<<" "<<endl;;
						int b;
						scanf("%d",&b);
						m[b]=1;
						c++;
					}
					else
					{
						cout<<">>复活药水<<不足"<<endl; 
					}
				}
			}
		}
		
		
		Sleep(1000);
		double p[20]={0};
		cout<<"                                 第"<<day<<"晚结束"<<endl;
		cout<<endl;
		if(m[n]==0)
		{
			cout<<"                             你已经>>死<<了";	
			break;
		}
		
		cout<<"                                    存活："<<endl;
		cout<<"                       ";
		for(int i=1;i<=15;i++)
			if(m[i]==1)
				cout<<i<<" ";
		cout<<endl;
		cout<<"                                    请投票...."<<endl;
		for(int i=1;i<=15;i++)
		{
			if(i==n&&m[n]==1)
			{
				cout<<endl;
				cout<<"                                 你选择投几号"<<endl; 
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
		cout<<"                                 投票情况："<<endl;
		for(int i=1;i<=15;i++)
			if(m[i]==1)
				cout<<"                                 "<<i<<"号"<<"  票数："<<p[i]<<endl; 
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
		cout<<"                                  "<<sw<<"死了"<<endl;
		c--;
		cout<<"                              "<<sw<<"号的身份是"; 
		if(s[sw]==1)
			cout<<"杀手"<<endl;
		else if(s[sw]==2)
			cout<<"预言家"<<endl;
		else if(s[sw]==3)
			cout<<"平民"<<endl;
		else 
			cout<<"女巫"<<endl; 
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
	  cout<<"                                             游戏结束"<<endl;
}
void initialWindow(HANDLE hOut)
{
    SetConsoleTitle("俄罗斯方块");
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
        cout << "■                    ■☆                      ☆" << endl;
    }
    gotoXY(hOut, 26, 0);
    cout << "☆☆☆☆☆☆☆☆☆☆☆";
    gotoXY(hOut, 0, 20);
    cout << "■■■■■■■■■■■■☆☆☆☆☆☆☆☆☆☆☆☆☆";
    gotoXY(hOut, 26, 1);
    cout << "分    数：      ";
    gotoXY(hOut, 26, 2);
    cout << "关    卡：      ";
    gotoXY(hOut, 26, 4);
    cout << "下一方块：";
    gotoXY(hOut, 26, 9);
    cout << "操作方法：";
    gotoXY(hOut, 30, 11);
    cout << "↑：旋转 ↓：速降";
    gotoXY(hOut, 30, 12);
    cout << "→：右移 ←：左移";
    gotoXY(hOut, 30, 13);
    cout << "空格键：开始/暂停";
    gotoXY(hOut, 30, 14);
    cout << "Esc 键：退出";
    gotoXY(hOut, 26, 16);
    cout << "关    于：";
    gotoXY(hOut, 30, 18);
    cout << "俄罗斯方块V1.0";
    gotoXY(hOut, 35, 19);
    cout << "作者：转载";
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
                    cout << "■";
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
    cout << "空格键：重来";
    gotoXY(hOut, 8, 10);
    cout << "ESC键：退出";
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
                cout << "■";
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
    cout << "游戏暂停";
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
                        cout << "■";
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
const int N = 15;       //15*15的棋盘
const char ChessBoard = ' ';  //棋盘标志
const char flag1 = 'o';    //玩家1或电脑标志
const char flag2 = 'x';    //玩家2标志

typedef struct Position{    //坐标
    int row;        //行
    int col;        //列
}Position;

class GoBang{     //五子棋类
public:
    GoBang(){
        InitChessBoard();      //初始化棋盘
    }
    void Play(){      //下棋
        Position Play1;   //玩家1或电脑
        Position Play2;   //玩家2
        while (1){
            int mode = ChoiceMode();
            while (1){
                if (mode == 1){       //电脑VS玩家
                    ComputerChess(Play1, flag1);            //电脑走
                    if (GetVictory(Play1, 0, flag1)){       //0代表电脑，为真则表示电脑获胜
                        break;
                    }
                    PlayChess(Play2, 2, flag2);         //玩家2走
                    if (GetVictory(Play2, 2, flag2)){       //2代表玩家2
                        break;
                    }
                }
                else{               //玩家1VS玩家2
                    PlayChess(Play1, 1, flag1);         //玩家1走
                    if (GetVictory(Play1, 1, flag1)){       //玩家1赢
                        break;
                    }
                    PlayChess(Play2, 2, flag2);         //玩家2走
                    if (GetVictory(Play2, 2, flag2)){       //玩家2赢
                        break;
                    }
                }
            }
            cout << "======再来一局=======" << endl;
            cout << "yes or no :";  
            char s[] = "yes";
            scanf("%d",&s);
            if (strcmp(s, "no") == 0){
                break;
            }
        }
    }

protected:
    void InitChessBoard(){          //初始化棋盘
        for (int i = 0; i < N + 1; ++i){
            for (int j = 0; j < N + 1; ++j){
                _ChessBoard[i][j] = ChessBoard;
            }
        }
    }

    int ChoiceMode(){           //选择模式
        system("cls");
        //系统调用，清屏
        InitChessBoard();       //重新初始化棋盘
        cout << "*************************************************" << endl;
        cout << "******************0、退出************************" << endl;
        cout << "******************1、电脑VS玩家******************" << endl;
        cout << "******************2、玩家VS玩家******************" << endl;
        cout << "*************************************************" << endl;
        while (1){
            int i = 0;
            cout << "请选择模式：";
            scanf("%d",&i);
            if (i == 0){       //退出
                exit(1);
            }
            if (i == 1 || i == 2){
                return i;
            }
            else{
                cout << "非法输入，请重新输入！" << endl;
            }
        }
    }

    void PrintChessBoard(){        //打印棋盘
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

    void ComputerChess(Position& pos, char flag){     //电脑走
        //PrintChessBoard();      //打印棋盘
        int x = 0;
        int y = 0;
        while (1){                    //循环查找空位置
            x = (rand() % N) + 1;      //产生从1~N的随机数
            srand((unsigned int)time(NULL));
            y = (rand() % N) + 1;      //产生从1~N的随机数
            srand((unsigned int)time(NULL));
            if (_ChessBoard[x][y] == ChessBoard){       //如果这个位置为空（没有棋子），跳出循环，下棋
                break;
            }
        }
        pos.row = x;
        pos.col = y;
        _ChessBoard[pos.row][pos.col] = flag;
    }

    void PlayChess(Position& pos, int player, char flag){
        PrintChessBoard();      //打印棋盘
        while (1){
            printf("请玩家%d输入坐标：", player);
            scanf("%d%d",&pos.row,&pos.col);
            if (JudgeValue(pos) == 1){        //判断坐标是否合法
                break;
            }
            cout << "坐标不合法，请重新输入：" << endl;
        }
        _ChessBoard[pos.row][pos.col] = flag;
    }

    int JudgeValue(const Position& pos){       //判断坐标的合法性
        //1.在棋盘上
        if (pos.row > 0 && pos.row <= N && pos.col > 0 && pos.col <= N){
            //2.所在位置为空（没有棋子）
            if (_ChessBoard[pos.row][pos.col] == ChessBoard){
                return 1;      //合法
            } 
        }
        return 0;       //非法
    }

    int JudgeVictory(Position pos, char flag){     //判断是否有玩家获胜（底层判断）
        int begin = 0;
        int end = 0;

        //1.判断行是否满足条件
        (pos.col - 4) > 0 ? begin = (pos.col - 4) : begin = 1;
        (pos.col + 4) > N ? end = N : end = (pos.col + 4);
        for (int i = pos.row, j = begin; j + 4 <= end; ++j){
            if (_ChessBoard[i][j] == flag && _ChessBoard[i][j + 1] == flag &&
                _ChessBoard[i][j + 2] == flag && _ChessBoard[i][j + 3] == flag &&
                _ChessBoard[i][j + 4] == flag)
                return 1;
        }
        //2.判断列是否满足条件
        (pos.row - 4) > 0 ? begin = (pos.row - 4) : begin = 1;
        (pos.row + 4) > N ? end = N : end = (pos.row + 4);
        for (int j = pos.col, i = begin ; i + 4 <= end; ++i){
            if (_ChessBoard[i][j] == flag && _ChessBoard[i + 1][j] == flag &&
                _ChessBoard[i + 2][j] == flag && _ChessBoard[i + 3][j] == flag &&
                _ChessBoard[i + 4][j] == flag)
                return 1;
        }
        //3.判断主对角线是否满足条件
        int len = 0;    //相对长度
        int start = 0;
        int finish = 0;
        pos.row > pos.col ? len = pos.col - 1 : len = pos.row - 1;
        if (len > 4){
            len = 4;
        }
        begin = pos.row - len;       //横坐标起始位置
        start = pos.col - len;       //纵坐标起始位置

        pos.row > pos.col ? len = N - pos.row : len = N - pos.col;
        if (len > 4){
            len = 4;
        }
        end = pos.row + len;         //横坐标结束位置
        finish = pos.col + len;      //纵坐标结束位置

        for (int i = begin, j = start; (i + 4 <= end) && (j + 4 <= finish); ++i, ++j){
            if (_ChessBoard[i][j] == flag && _ChessBoard[i + 1][j + 1] == flag &&
                _ChessBoard[i + 2][j + 2] == flag && _ChessBoard[i + 3][j + 3] == flag &&
                _ChessBoard[i + 4][j + 4] == flag)
                return 1;
        }
        //4.判断副对角线是否满足条件
        (pos.row - 1) > (N - pos.col) ? len = N - pos.col : len = pos.row - 1;
        if (len > 4){
            len = 4;
        }
        begin = pos.row - len;       //横坐标起始位置
        start = pos.col + len;       //纵坐标起始位置

        (N - pos.row) > (pos.col - 1) ? len = pos.col - 1 : len = N - pos.row;
        if (len > 4){
            len = 4;
        }
        end = pos.row + len;         //横坐标结束位置
        finish = pos.col - len;      //纵坐标结束位置 
        for (int i = begin, j = start; (i + 4 <= end) && (j - 4 >= finish); ++i, --j){
            if (_ChessBoard[i][j] == flag && _ChessBoard[i + 1][j - 1] == flag &&
                _ChessBoard[i + 2][j - 2] == flag && _ChessBoard[i + 3][j - 3] == flag &&
                _ChessBoard[i + 4][j - 4] == flag)
                return 1;
        }
        //该位置并未下棋
        for (int x = 1; x < N + 1; ++x){
            for (int y = 1; y < N + 1; ++y){
                if (_ChessBoard[x][y] == ChessBoard){
                    return 0;       //未下棋
                }
            }
        }
        return -1;      //和局
    }

    bool GetVictory(Position& pos, int player, char flag){       //判断具体哪位玩家赢
        if (JudgeVictory(pos, flag) != 0){    //判断有无人获胜
            if (JudgeVictory(pos, flag) == 1){     //判断是否有人获胜,1表示获胜
                PrintChessBoard();     //打印棋盘
                if (player == 0){
                    cout << "电脑获胜！" << endl;
                }
                else{
                    printf("恭喜玩家%d获胜！\n", player);
                }
            }
            else{
                printf("和局！\n");
            }
            return true;      //有人获胜
        }   
        return false;         //没人获胜
    }

private:
    char _ChessBoard[N + 1][N + 1];    //棋盘
};
int yx1()//科普一下，用Win+R键，点击浏览，点击文件名称，复制地址，将其输入在system上，就可以打开文件了 
{
	printf("打开后请自主运行!\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++重点文件\\斗破苍穹[V2.2.1].exe");
} 
int yx2()
{
	printf("打开后请自主运行!\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++重点文件\\Untitled[IR]v1.6.0.exe");
} 
int yx3()
{
	printf("打开后请自主运行！\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++重点文件\\Untitled[Input]v1.2.0.exe");
}
int yx4()
{
	printf("打开后请自主运行！\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++重点文件\\三子棋.exe");
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
	printf("打开后请自主运行！\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++重点文件\\RPG游戏[V1.0.1].exe");
}
int yx7()
{
	printf("打开后请自主运行！\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++重点文件\\Untitled[我的世界].exe");
}
int yx8()
{
	char y[100]="cls";
	system(y);
	int map[21][12];
    int blockA[4][4];//候选区的方块
    int blockB[4][4];//下落中的方块
    int positionX, positionY;//方块左上角的坐标
    bool check;//检查方块还能不能下落
    char key;//用来存储按键
    int val;//用来控制下落速度
    int fraction;//用来存储得分
    int checkpoint;//用来存储关卡
    int times;
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);//获取标准输出设备句柄
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
		cout<<"                                            杀手游戏"<<endl;
		cout<<"--------------------------------------------------------------------------------------";
		cout<<"                                                                    1.开始游戏"<<endl;
		cout<<"                                2.查看游戏规则"<<endl;
		a=getch();
		if(a=='1')
		{
			cout<<"                                  1. 15人场"<<endl;
			cout<<"                           2. 30人娱乐战(10猎人)<敬请期待>"<<endl;
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
			cout<<"杀手：每当晚上的时候可使用杀人权杀掉一人"<<endl;//1
			cout<<"预言家：每天晚上可以知道一个人的身份"<<endl;//2 
			cout<<"平民：无技能,当玩家是平民时，在第5天拥有1.5票的投票权"<<endl;//3
			cout<<"猎人：此身份仅限于30人娱乐局中，死亡后可带走一人"<<endl; 
			cout<<"投票细则：\n游戏中除了你以外全是由超级AI人工代替"<<endl;
			cout<<"杀手不会杀掉朋友，但不包括投票环节"<<endl;
			cout<<"预言家如果预言到杀手将一直对他投票，如果预言到平民将永远不会对他投票"<<endl;
			cout<<"平民将投上一个晚上对他投票他的人"<<endl;
			cout<<"********利用好超级AI游戏规则找出杀手**********"<<endl;
			system("pause");
		}
	}
	return 0;
}
int yx10()
{
	printf("打开后请自主运行！\n");
	system("C:\\Users\\CHJ\\Documents\\DEV-C++\\!C++重点文件\\绝地枪战.exe");
}


int yx()
{
	printf("请选择你要玩的游戏(1-斗破苍穹,2-IR游戏,3-数字小游戏,4-三子棋,5-五子棋,6-双人RPG游戏,7-我的世界,8-俄罗斯方块，9-狼人杀，10-绝地枪战):");
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
	
	printf("-------------------Gick系统-------------------\n");
	printf("版本号为：Vita1.1.1，为十分不稳定版本\n");
	printf("作品介绍：以最简洁的代码带给用户最好的体验！\n");
	printf("-------------------[更新日志]--------------------\n");
	printf("Vita1.1.0:诞生了早期的Gick，名为实用程序，是最早的版本\n"); 
	return 0;
}
int kt()
{
	printf("--------------------------------------\n");
	printf("--------------------Gick1.1.1-------------------\n");
	printf("---------------拥有版权，请勿抄袭！-------------\n");
	printf("-----------邮箱：jason29277@163.com-------\n");
	printf("您是默认模式,程序可能无法通过安全软件，请手动打开\n");
	printf("这个程序需要大量附属程序，请确保安装包安装完整！\n");
	printf("--------------------退出按0-------------------\n");
	printf("---------------密码破解生成器按1----------------\n"); 
	printf("-----------------自制计算器按2------------------\n");
	printf("------------------Cmd程序按3--------------------\n");
	printf("------------自制小游戏（部分转载）按4------------\n");
	printf("-----------------制作日志按5--------------------\n");
	printf("---------------更改字体颜色按6------------------\n");
	printf("-----------------内测程序按7--------------------\n");
	printf("-----------------Bug入口按8---------------------\n");
}
int wycom()
{
	char b[1000],y[1000];
	int f;
	printf("网址类型为http按1\n网址类型为https按2\n:");
	 scanf("%d",&f);
	 if(f==1)
	 {
	 	printf("请输入网址如（百度）：www.baidu.com\n:");
		scanf("%s",y+1);
		string string2 = concTwoStrings("start http://",y+1,"/");
		strcpy(b, string2.c_str());
		system(b);
		printf("退出按0");
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
	 		printf("请输入网址如（必应）：cn.bing.com\n:");
			scanf("%s",y+1);
			string string2 = concTwoStrings("start https://",y+1,"/");
			strcpy(b, string2.c_str());
			system(b);
			printf("退出按0");
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
	printf("你要改变字体什么颜色（1-黑色，2-白色，3-灰色：");
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
