#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
using namespace std;
int x=50;  //�߽��x��y
int y=20;
int birdx=x/5;
int birdy=y/4;
int speed=0;//�����ٶ�
int speed2=0;//�����ϰ���������ٶ�
int xx=x/2;//�ϰ����x����
int yy= rand()%(y/2);

int count=0;//��¼����ĵ÷�                                                                                 


void notin();
void in();
void gotoxy(int x,int y)
     {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y =y;
	SetConsoleCursorPosition(handle,pos);
}
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info={1,0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}
void show()//��ʼ�ĳ�ʼ�����ﵽѭ����ʾ��Ŀ�ģ�
{
         gotoxy(0,0) ;
         	HideCursor()   ;
         	for(int i=1;i<y;++i)
         	{
         		for(int j=1;j<x;++j)
         		{
         			if(j==birdx&&i==birdy)
         			{
         				cout<<"\b"<<"��"; //\b����������Ϊ����ĺ��ֶ�ռ��һ����С�Ŀռ䣬\bɾ��֮ǰһ��λ�õ����
					 }
					 else if(j==xx&&(i>=1&&i<=yy)||j==xx&&(i>=yy+5&&i<=y))
					 cout<<"*" ;

					 else
					 cout<<" ";
				 }
				 cout<<endl;
			 }

			 cout<<"�÷֣�"<<count/6<<endl;

}
void in()
{
if(kbhit())
{
	   string ss;
	  ss=getch();

		  if(ss==" ")
		  {
			if(birdy>3)birdy-=3;
		  }


}
}
void notin()  //�ı�С���λ�ú��ϰ����λ��
{
		if (birdx==xx&& (birdy>=yy&&birdy<=yy+5))
        count+=1;

      if(speed!=3)
      {
      	speed++;
	  }
	   if(birdy!=y&&speed==3)
   {
		   birdy+=1;
		   speed=0;
	}


	  if(speed2!=5)
	  {
	  	speed2++;
	  }
	  else if(speed2==5)
	  {
	  	if(xx>0)
	  {
	  	xx--;

	  }


	  if(xx==0)
	  {
	  	 xx=x/2;//�ϰ����x����
         yy= rand()%(y/2);
         while(yy==0)
         {
			yy= rand()%(y/2);
		 }

	  }
   speed2=0;
	  
}



}
int main()
{
	   while(yy==0)
{
	  yy= rand()%(y/2);
}
      while(1)
{


		    show();
		    notin();
		    in() ;
		    if(birdx==xx&&(((birdy>1&&birdy<yy))||(birdy >yy+5&&birdy<y)))
{
		 cout<<"YOU ARE FILLED!!"<<endl;
		 break;
}



}
		return 0;
}
     
