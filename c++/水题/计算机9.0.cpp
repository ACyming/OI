#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void jf(double a,double b)
{
	printf("%lf",a+b);
	Sleep(2500);
	system("cls");
}
void jjf(double a,double b)
{
	printf("%lf",a-b);
	Sleep(2500);
	system("cls");
}
void cf(double a,double b)
{
	printf("%lf",a*b);
	Sleep(2500);
	system("cls");
}
void ccf(double a,double b)
{
	printf("%lf",a/b);
	Sleep(2500);
	system("cls");
}
int main()
{
	int lo=0;
	while(1) 
	{
		int a,b;
		cout<<"欢迎使用计算机(ctrl+c停止)"<<endl;
		cout<<"加法输入1，减法输入2，乘法输入3，除法输入4（仅能计算6位小数，多余的四舍五入，不可进行综合计算）"<<endl;
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<"输入要计算的内容，一行一个。"<<endl;
			cin>>a>>b;
			jf(a,b);
		}
		else if(n==2)
		{
			cout<<"输入要计算的内容，一行一个。"<<endl;
			cin>>a>>b;
			jjf(a,b);
		}
		else if(n==3)
		{
			cout<<"输入要计算的内容，一行一个。"<<endl;
			cin>>a>>b;
			cf(a,b);
		}
		else if(n==4)
		{
			cout<<"输入要计算的内容，一行一个。"<<endl;
			cin>>a>>b;
			ccf(a,b);
		}
		else
		{
			if(lo>4)
			{
				system("color 4");
				cout<<"请勿调戏本程序！"<<endl;
				Sleep(2500);
				system("color 7");
				lo++;
			}
			else if(lo>9)
			{
				while(1)
				{
					system("color 4");
					cout<<"请勿调戏本程序！"<<endl;
					Sleep(2500);
				}
				
			}
			else
			{
				system("color 4");
				cout<<"请勿调戏本程序！"<<endl;
				Sleep(2500);
				system("color 7");
				lo++;
			}
		} 
	}
	
}
