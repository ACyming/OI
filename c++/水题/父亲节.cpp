#include<bits/stdc++.h>
#include<windows.h> 
using namespace std;
int main()
{
	int x,f=100;
	int  i, j, k, l, m,a;
char c=3; 
	x=MessageBox(GetForegroundWindow(),"又是一年一度的父亲节","又是一年一度的父亲节(你都点否试试！)",4);
	if(x==6)
	{
		x=0;
		x=MessageBox(GetForegroundWindow(),"开心吧！！","又是一年一度的父亲节",4);
		if(x!=6)
		{
			
			cout<<"呵呵，不高兴算了！！！";	
			cout<<"亿点点小惩罚..."<<endl;
			for(int i=1;i<=100000;i++)
			{
				int x=GetSystemMetrics(SM_CXSCREEN);//鼠标x轴 
 	  		int y=GetSystemMetrics(SM_CYSCREEN);//鼠标y轴 
 	  		SetCursorPos(rand()%x,rand()%y);//鼠标 x y轴 随机
			}
			
 	  		
			cout<<"but（但是）..."<<endl<<"礼物也有的！！";
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
		cout<<"你发现了一个彩蛋";
		Sleep(5000);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		printf("离线版逃离伏拉夫\n【关卡】");
	
	printf("a开始 b退出 c致辞 d吐槽\n");
	scanf("%c",&a);
	if(a=='a')
	{
		printf("你有五个道具：拖把、辣椒、玩偶、铁棍、雨伞");
		printf("此时，伏拉夫追上来了！你要 1往左跑 还是 2往右跑？\n");		 
		scanf("%d",&b);
		if(b==1)
		{
			printf("来到左边，有一间杂物室，你进去了。里面有一个铁窗。此时伏拉夫追上来了！你选择？ 1用撬棍开窗出去 2躲起来 3用拖把跟他硬钢\n");
			scanf("%d",&b);
			if(b==1)
			{
				printf("你跳下窗，发现这里是三楼。你摔死了\n");
				printf("逃离伏拉夫失败");
				 
				return 0;
			}
			if(b==2)
			{
				printf("伏拉夫来到房间，这时你手机响了。伏拉夫发现了你。\n");
				printf("逃离伏拉夫失败");
				 
				return 0;
			}
			if(b==3)
			{
				printf("你的拖把打到了伏拉夫的眼睛。你乘机逃走。\n");
				printf("前面有个电梯。你要 1往上 还是 2往下？");
				scanf("%d",&c);
				if(c==2)
				{
					printf("伏拉夫在一楼等着你。你被抓了，逃离伏拉夫失败");
					 
					return 0;
				}
				if(c==1)
				{
					printf("你来到了天台。你选择？ 1跳下去 2拿铁棍和伏拉夫刚 3吃辣椒\n");
					scanf("%d",&d);
					if(d==1)
					{
						printf("你用雨伞当降落伞跳了下去，你成功降落\n");
						printf("如何逃离伏拉夫的保安？\n");
						printf("1去和他刚 2拿美女照片迷惑他 3用辣椒辣他眼睛\n");
						scanf("%d",&e);
						if(e==1)
						{
							printf("你被保安打晕了。逃离伏拉夫失败");
							 
							return 0;
						}
						if(e==2)
						{
							printf("保安不吃这一套。逃离伏拉夫失败");
							 
							return 0;
						}
						if(e==3)
						{
							printf("你成功了。逃离伏拉夫成功");
							printf("通过第一关   1下一关   2退出"); 
							scanf("%d",&i);
							if(i==1)
							{
								printf("你逃出了伏拉夫的家,要如何回家？\n 1问路人   2骑旁边的自行车   3走路\n");
								scanf("%d",&j);
								if(j==1)
								{
									printf("你发现路人是伏拉夫，面前有两个道具   1铁棍   2木棍\n");
									scanf("%d",&k);
									if(k==1)
									{
										printf("你被伏拉夫打晕了，回家失败");
										 
										return 0;  
									}
									else
									{
										printf("你被伏拉夫打晕了，回家失败");
										 
										return 0; 
									}
								}
								if(j==2)
								{
									printf("你骑到了十字路口，要往哪骑?  1前 2左 3右");
									scanf("%d",&l);
									printf("你摔了，回家失败");
									 
								}
								if(j==3)
								{
									printf("你遇见了伏拉夫  要怎么做？  1打他  2跑");
									scanf("%d",&m);
									if(m==1)
									{
										printf("你被伏拉夫打晕了，回家失败");
										 
										return 0;
									}
									else
									{
										printf("你迷路了，有两个道具  1袜子   2棍子");
										scanf("%d",&n);
										if(n==1)
										{
											printf("伏拉夫被臭跑了，你回了家，回家成功");
											return 0; 
										}
										else
										{
											printf("你被伏拉夫打晕了，回家失败");
											 
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
						printf("伏拉夫把你打晕了。逃离伏拉夫失败\n");
						 
						return 0;
					}
					if(d==3)
					{
						printf("你吃了辣椒，浑身来了斗志，去和伏拉夫刚。结果还是被伏拉夫打晕了。逃离伏拉夫失败\n");
						 
						return 0;
					}
				}
			}
		}
		else
		{
			printf("你暂时远离了伏拉夫\n");
			printf("你前面有两个房间：1厨房，2厕所"); 
			scanf("%d",&f);
			if(f==1) 
			{
				printf("你从厨房的通风口爬了出去\n");
				printf("伏拉夫追上来了。你会怎么做？\n");
				printf("1用玩偶 2打他 3跑");
				scanf("%d",&g);
				if(g==1)
				{
					printf("伏拉夫以为是小孩，叫了声小孩火锅，你跑走了\n");
					printf("前面有一个bt，他要拦住你。你会怎么做？\n");
					printf("1拿美女照片 2刚");
					scanf("%d",&h);
					if(h==1)
					{
						printf("成功了！你逃离了伏拉夫！伏拉夫非常生气");
						printf("逃离伏拉夫成功！但是");
						 
						return 0;
					}
					if(h==2)
					{
						printf("你又没有刚过。逃离失败");
						 
						return 0;
					}
				}
				if(g==2)
				{
					printf("你没刚过伏拉夫，逃离伏拉夫失败\n");
					 
					return 0;
				}
				if(g==3)
				{
					printf("你被抓住了。逃离伏拉夫失败");
					 	
					return 0;			
				}
		    }
			if(f==2)
			{ 
				printf("你想从下水道爬出去，结果头太大卡住了。伏拉夫把你用来煮小孩火锅。\n");
				printf("逃离伏拉夫失败\n");
				 
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
		printf("你个**，居然敢吐槽我\n");
		 
	}
	}
	return 0;
}
