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
		cout<<"��ӭʹ�ü����(ctrl+cֹͣ)"<<endl;
		cout<<"�ӷ�����1����������2���˷�����3����������4�����ܼ���6λС����������������룬���ɽ����ۺϼ��㣩"<<endl;
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<"����Ҫ��������ݣ�һ��һ����"<<endl;
			cin>>a>>b;
			jf(a,b);
		}
		else if(n==2)
		{
			cout<<"����Ҫ��������ݣ�һ��һ����"<<endl;
			cin>>a>>b;
			jjf(a,b);
		}
		else if(n==3)
		{
			cout<<"����Ҫ��������ݣ�һ��һ����"<<endl;
			cin>>a>>b;
			cf(a,b);
		}
		else if(n==4)
		{
			cout<<"����Ҫ��������ݣ�һ��һ����"<<endl;
			cin>>a>>b;
			ccf(a,b);
		}
		else
		{
			if(lo>4)
			{
				system("color 4");
				cout<<"�����Ϸ������"<<endl;
				Sleep(2500);
				system("color 7");
				lo++;
			}
			else if(lo>9)
			{
				while(1)
				{
					system("color 4");
					cout<<"�����Ϸ������"<<endl;
					Sleep(2500);
				}
				
			}
			else
			{
				system("color 4");
				cout<<"�����Ϸ������"<<endl;
				Sleep(2500);
				system("color 7");
				lo++;
			}
		} 
	}
	
}
