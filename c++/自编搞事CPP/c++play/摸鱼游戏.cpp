#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"欢迎来到摸鱼小游戏"<<endl;
	cout<<"这是个生存游戏"<<endl;
	int a;
	string b;
	cout<<"输入姓名"<<endl;
	b="周键豪"; 
	cout<<"周键豪"<<endl<<"你好"<<b<<endl; 
	cout<<"选择职业 1乞丐 2乞丐 3乞丐 5乞丐 6乞丐 7乞丐 8乞丐 9乞丐 10乞丐 ......乞丐"<<endl;
	cin>>a;	
	if(a>=1)
 {
	 	cout<<"选择成功!"<<endl;
	    cout<<"你是一个流浪在街头的乞丐"<<endl;
	     cout<<"有一天你在要饭时，有个人摔伤了需要帮助，你要帮他吗"<<endl;
		cout<<"1帮 2不帮"<<endl;
		 int c;
		 cin>>c; 
	     if(c==1)
	     {
	     	cout<<"他被你送去医院，医生治好后他十分感谢你，就给了你一份工作和一些衣物"<<endl;
	     	cout<<"第二天你去了他的公司，开始上班，有个人故意找茬撞了你随后大吼道：走路没看路啊！"<<endl;
	     	cout<<"你决定 	1和老板说  	2不理他";
	     	int c1;
	     	cin>>c1;
	     	if(c1==2)
	     	{
	     		cout<<"他见你不理他就生气了，当下班后你被他毒打了一顿，又上班了几天，你因为心脏病去世了";
	     		while(1000000000000){
	     			cout<<"  game over";
				 }
			 }
			 if(c1==1)
			 {
			 	cout<<"老板知道此事后立刻开除了那个员工，跟其他人说:要是再搞"<<b<<"就立刻开除"<<endl; 
			 	cout<<"其他员工都很害怕，不过有一个除外"<<endl; 
			 	cout<<"你下班后，"<<endl; 
			 }
		 }
		 if(c==2)
		 {
		 	cout<<"你当做什么也没看到就走了，你错过了一个赚钱的机会！"<<endl; 
		 	cout<<"过了不久有个好心人冯大帅前来收留你。"<<endl;
			cout<<"可你天天就知道玩游戏"<<endl;
			cout<<"游戏开始:"<<endl;
			_sleep(3000);
		    char zzzzzz;
		    int y,g=3,j=0,x=100,m,gg,xx,kang=0,bb,ggggg=1;
		    string k="无";
		    int xiaodao=0,changjian=0,zhayao=0,xiebao=0;
		    while(1)
		    {
		    	cout<<"目前"<<k<<"装备"<<" "<<"攻击力:"<<g<<" "<<"金币"<<j<<" "<<x<<"点血"<<setw(85)<<"4.神秘ヾ(≧▽≦*)o"<<endl; 
				cout<<"请问你现在要做什么:"<<endl; 
				cout<<"1.打小怪兽"<<endl;
				cout<<"2.购买装备"<<endl;
				cout<<"3.背包"<<endl;
				cin>>y;
				if(y==2)
				{
					while(1)
					{
						cout<<"欢迎来到帅比商店,请问你要买些什么?"<<endl;
						cout<<"目前有金币"<<j<<endl;
						cout<<"1.小刀  攻击力7  10金币"<<endl;
						cout<<"2.长剑  攻击力18  30金币"<<endl;
						cout<<"3.炸药  攻击力30  20金币"<<endl;
						cout<<"4.血包  恢复10点血  5金币"<<endl;
						cout<<"5.铜甲  抗性4点血  20金币"<<endl;
						cout<<"6.铁甲  抗性8点血  40金币"<<endl;
						cout<<"7.钻甲  抗性16点血  80金币"<<endl;
						cout<<"0.退出"<<endl;
						cin>>m;
						if(m==1)
						{
							if(j>=10)
							{
								xiaodao++;
								j=j-10;
								cout<<"购买成功!";
								cout<<"目前背包:"<<endl;
								cout<<xiaodao<<"小刀"<<" "<<changjian<<"长剑"<<" "<<zhayao<<"炸药"<<" "<<xiebao<<"血包"<<endl<<endl; 
							}
							else
							{
								cout<<"金币不足!"<<endl<<endl;
							}
						}
						if(m==2)
						{
							if(j>=30)
							{
								changjian++;
								j=j-30;
								cout<<"购买成功!";
								cout<<"目前背包:"<<endl;
								cout<<xiaodao<<"小刀"<<" "<<changjian<<"长剑"<<" "<<zhayao<<"炸药"<<" "<<xiebao<<"血包"<<endl<<endl; 
							}
							else
							{
								cout<<"金币不足!"<<endl<<endl;
							}
						}
						if(m==3)
						{
							if(j>=20)
							{
								zhayao++;
								j=j-20;
								cout<<"购买成功!";
								cout<<"目前背包:"<<endl;
								cout<<xiaodao<<"小刀"<<" "<<changjian<<"长剑"<<" "<<zhayao<<"炸药"<<" "<<xiebao<<"血包"<<endl<<endl; 
							}
							else
							{
								cout<<"金币不足!"<<endl<<endl;
							}
						}
						if(m==4)
						{
							if(j>=5)
							{
								xiebao++;
								j=j-5;
								cout<<"购买成功!";
								cout<<"目前背包:"<<endl;
								cout<<xiaodao<<"小刀"<<" "<<changjian<<"长剑"<<" "<<zhayao<<"炸药"<<" "<<xiebao<<"血包"<<endl<<endl; 
							}
							else
							{
								cout<<"金币不足!"<<endl<<endl;
							}
						}
						if(m==5)
						{
							if(j>=20)
							{
								k="铜甲";
								j=j-20;
								kang=kang+4;
								cout<<"购买成功!";
								cout<<"目前装备:"<<endl;
								cout<<k<<endl; 
								cout<<"目前背包:"<<endl;
								cout<<xiaodao<<"小刀"<<" "<<changjian<<"长剑"<<" "<<zhayao<<"炸药"<<" "<<xiebao<<"血包"<<endl<<endl; 
							}
							else
							{
								cout<<"金币不足!"<<endl<<endl;
							}
						}
						if(m==6)
						{
							if(j>=40)
							{
								k="铁甲";
								j=j-40;
								kang=kang+8;
								cout<<"购买成功!";
								cout<<"目前装备:"<<endl;
								cout<<k<<endl; 
								cout<<"目前背包:"<<endl;
								cout<<xiaodao<<"小刀"<<" "<<changjian<<"长剑"<<" "<<zhayao<<"炸药"<<" "<<xiebao<<"血包"<<endl<<endl; 
							}
							else
							{
								cout<<"金币不足!"<<endl<<endl;
							}
						}
						if(m==7)
						{
							if(j>=80)
							{
								k="钻甲";
								kang=kang+16;
								j=j-80;
								cout<<"购买成功!";
								cout<<"目前装备:"<<endl;
								cout<<k<<endl; 
								cout<<"目前背包:"<<endl;
								cout<<xiaodao<<"小刀"<<" "<<changjian<<"长剑"<<" "<<zhayao<<"炸药"<<" "<<xiebao<<"血包"<<endl<<endl; 
							}
							else
							{
								cout<<"金币不足!"<<endl<<endl;
							}
						}
						if(m==0)
						{
							cout<<"谢谢惠顾!"<<endl<<endl;
							break;
						}
					}
				}
				if(y==1)
				{
					if(x>=1)
					{
						srand((unsigned int)time(NULL));
						xx=rand()%20+20;
						srand((unsigned int)time(NULL));
						gg=rand()%5+15;
						if(gg>=kang)
						{
							gg=gg-kang;
						}
						else
						{
							srand((unsigned int)time(NULL));
							gg=0;
						}
						while(x>0&&xx>0)
						{
							cout<<"小怪兽血量:"<<xx<<" "<<"小怪兽攻击力:"<<gg<<endl<<endl;
							cout<<b<<"的回合:"<<endl;
							cout<<"攻击力:"<<g<<endl;
							cout<<"1.攻击或回血"<<endl;
							cout<<"2.背包"<<endl;
							cin>>bb;
							if(bb==3)
							{
								zzzzzz='^';
								break;
							}
							if(bb==2)
							{
								cout<<"目前背包:"<<endl;
								cout<<xiaodao<<"小刀.1"<<" "<<changjian<<"长剑.2"<<" "<<zhayao<<"炸药.3"<<" "<<xiebao<<"血包.4"<<" "<<"空手.5"<<endl;
								cin>>m;
								if(m==5)
								{
									g=3;
									cout<<"空手"<<endl<<endl;
								}
								if(m==1)
								{
									if(xiaodao>0)
									{
										cout<<"现持小刀"<<endl<<endl;
										g=7;
									}
								}
								if(m==2)
								{
									if(changjian>0)
									{
										cout<<"现持长剑"<<endl<<endl;
										g=18; 
									}
								}
								if(m==3)
								{
									if(zhayao>0)
									{
										cout<<"现持炸药"<<endl<<endl;
										g=30;
									}
								}
								if(m==4)
								{
									if(xiebao>0)
									{
										cout<<"现持血包"<<endl<<endl;
										g=5;
									}
								}
								continue;
							}
							if(bb==1)
							{
								if(g==30)
								{
									zhayao--;
								}
								if(g==5)
								{
									g=0;
									zhayao--;
									x=x+10;
								}
								xx=xx-g;
								cout<<b<<"的血量:"<<x<<" "<<"小怪兽的血量"<<xx<<endl<<endl;
								if(g==30)
								{
									g=0;
								}
							}
							cout<<"怪物回合:"<<endl<<endl;
							cout<<"怪物使用了攻击"<<endl;
							x=x-gg;
							cout<<a<<"的血量:"<<x<<" "<<"小怪兽的血量"<<xx<<endl<<endl;
						}
						if(xx<x)
						{
							int jj=rand()%50+10;
							j=j+jj;
							cout<<"恭喜你获胜!"<<" "<<"+"<<jj<<"金币"<<endl<<endl;
							system("pause");
						}
						if(xx>x)
						{
							j=j-10;
							cout<<"失败!"<<endl<<endl;
							system("pause");
							break;
						}
					}
				}
				if(y==4)
				{
					int jjjj=5;
					if(ggggg==1)
					{
						system("color 1");
						cout<<"被你发现了!  w(`Д`)w"<<endl;
						system("pause");
						system("color 2");
						cout<<"这是一个惊天动地的消息!  ╰（‵□′）╯"<<endl;
						system("pause");
						system("color D");
						cout<<"是什么呢?  (づ￣ 3￣)づ"<<endl;
						system("pause");
						system("color 5");
						cout<<"究竟是什么呢?  w(≧-≦)w"<<endl;
						system("pause");
						system("color C");
						cout<<"这其中蕴含着天大的真相!"<<endl;
						system("pause");
						system("color 4");
						cout<<"就是  (≧ω≦)"<<endl;
						system("pause");
						system("color 6");
						cout<<"何珞华最帅哈哈哈  (/≧▽≦)/"<<endl;
						system("pause");
					}
					system("color 7");
					cout<<"何珞华	1.帅	2.最帅	3.巨帅	4.丑"<<endl;
					int yyyy;
					cin>>yyyy;
					if(yyyy==1)
					{
						cout<<"有眼光给你+5金币!"<<endl<<endl;
						j=j+5;
						cout<<j<<"金币"<<endl;
						ggggg=0;
					}
					if(yyyy==2)
					{
						cout<<"真识相给你+10金币!"<<endl<<endl;
						j=j+10;
						cout<<j<<"金币"<<endl;
						ggggg=0;
					}
					if(yyyy==3)
					{
						cout<<"真机灵给你+20金币!"<<endl<<endl;
						j=j+20;
						cout<<j<<"金币"<<endl;
						ggggg=0;
					}
					if(yyyy==4)
					{
						cout<<"你完了,我记住你了!"<<endl;
						system("pause");
						ggggg=0;
						while(1)
						{
							cout<<"何珞华	1.帅	2.丑"<<endl;
							cin>>yyyy;
							if(yyyy==1)
							{
								cout<<"这还差不多!"<<endl<<endl;
								break;
							}
							if(yyyy==2)
							{
								cout<<"怎么这么不识相?看我扣你"<<jjjj<<"金币!"<<endl;
								j=j-jjjj;
								jjjj=jjjj+5;
								cout<<j<<"金币"<<endl;
							}
						}
					}
				}
				if(y==3)
				{
					cout<<"1.回血	2.查看背包"<<endl;
					int vvvvv;
					cin>>vvvvv;
					if(vvvvv==1)
					{
						if(xiebao>0)
						{
							x=x+5;
							xiebao--;
						}
						else
						{
							cout<<"没有血包剩余!"<<endl<<endl; 
						}
					}
					if(vvvvv==2)
					{
						cout<<"目前背包:"<<endl;
						cout<<xiaodao<<"小刀.1"<<" "<<changjian<<"长剑.2"<<" "<<zhayao<<"炸药.3"<<" "<<xiebao<<"血包.4"<<" "<<"空手.5"<<endl;
						cin>>m;
						if(m==5)
						{
							g=3;
							cout<<"空手"<<endl<<endl;
						}
						if(m==1)
						{
							if(xiaodao>0)
							{
								cout<<"现持小刀"<<endl<<endl;
								g=7;
							}
							else
							{
								cout<<"未获得!"<<endl<<endl;
							}
						}
						if(m==2)
						{
							if(changjian>0)
							{
								cout<<"现持长剑"<<endl<<endl;
								g=18; 
							}
							else
							{
								cout<<"未获得!"<<endl<<endl;
							}
						}
						if(m==3)
						{
							if(zhayao>0)
							{
								cout<<"现持炸药"<<endl<<endl;
								g=30;
							}
							else
							{
								cout<<"量已用尽,已无剩余!"<<endl<<endl; 
							}
						}
						if(m==4)
						{
							if(xiebao>0)
							{
								cout<<"现持血包"<<endl<<endl;
							}
							else
							{
								cout<<"量已用尽,已无剩余!"<<endl<<endl; 
							}
						}
					}
				}
			}
			system("pause");
			cout<<"你天天玩游戏，冯大帅也养不起你，让你去工作！"<<endl;
			cout<<"第二天你去了冯大帅的公司，开始上班，有个人故意找茬撞了你随后大吼道：走路没看路啊！"<<endl;
	     	cout<<"你决定 	1和冯大帅说  	2不理他";
	     	int c1;
	     	cin>>c1;
	     	if(c1==2)
	     	{
	     		cout<<"他见你不理他就生气了，当下班后你被他毒打了一顿，又上班了几天，你因为心脏病去世了";
	     		while(1000000000000){
	     			cout<<"  game over";
				 }
			 }
			 if(c1==1)
			 {
			 	cout<<"老板知道此事后立刻开除了那个员工，跟其他人说:“要是再搞周乞丐就立刻开除!”"<<endl; 
			 	cout<<"其他员工都很害怕，不过有一个除外"<<endl; 
			 	cout<<"你下班后，"<<endl; 
			 }
		 }
	}
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"欢迎来到摸鱼小游戏"<<endl;
	cout<<"这是个生存游戏"<<endl;
	int a;
	string b;
	cout<<"输入姓名"<<endl;
	cin>>b;
    cout<<"你好"<<b<<endl; 
	cout<<"选择职业 1打工人 2特警 3乞丐 4老板";
	cin>>a;	
	if(a==1||a==2||a==3||a==4){
		cout<<"选择成功"<<endl;
	}
    else{
      	while(a!=1||a!=2||a!=3||a!=4)
	    {
			cout<<"选择失败";
			cin>>a;
			if(a==1||a==2||a==3||a==4)
			{
				break;
			}
		}
	
	  }
	if(a==1)
	{
		cout<<"这一天，你被老板请到办公室，他问你要不要去去外国打工，一年赚10万，还有奖金"<<endl;
		cout<<"1立刻去 2不去"<<endl;
		int a1;
		cin>>a1;
		if(a1==1){
			cout<<"老板十分高兴，他给你2万作为路费，你出发了"<<endl;
			cout<<"刚刚去到你被人暗杀了"<<endl;
			cout<"game over"; 
		} 
		if(a1==2)
		{
			cout<<"老板很生气，一怒这下就把你炒鱿鱼了"<<endl;
			cout<<"你每天无所事事，口袋的钱已经不多了"<<endl;
			cout<<"1去找工作 2继续下去"<<endl;
			int a2;
			cin>>a2; 
			if(a2==2)
			{
				cout<<"你的钱用完了，最终你饿死在家里......"<<endl<<"game over";
				return 0;
			}
			if(a2==1)
			{
				cout<<"你成功找到一份工作，你要去吗？"<<endl;
				cout<<"1去 2不去";
				int a3;
				cin>>a3;
				if(a3==2)
				{
						cout<<"你每天无所事事，口袋的钱已经不多了"<<endl;
						cout<<"你的钱用完了，最终你饿死在家里......"<<endl<<"game over";
						return 0;
				 }
				 if(a3==1)
				 {
				 	cout<<"那个新老板很重用你，他让你当上了经理！"<<endl;
				 	cout<<"你很开心"<<endl;
				 	cout<<"1决定请老板吃饭 2不请"<<endl;
				 	int a4;
				    cin>>a4;
				    if(a4==1)
				 	{
				 		cout<<"老板吃了很多他接了个电话就走了，服务员让你付钱一共付4100元，你付了3900元说没...没钱了"<<endl;
				 		cout<<"她说没事，留下来洗碗";	
				 		int a7;
				 		cout<<"1洗碗 2打她";
				 		cin>>a7;
						if(a7==1){
							cout<<"你乖乖的洗完碗，直到第3天。你去上班时，老板问你怎么这么晚"<<endl;
							cout<<"你说前天请你吃饭时钱没有带够就被留下来洗碗，到刚刚才出来"<<endl;
							cout<<"老板看你这么诚实就给了你一堆钱"<<endl;
							cout<<"从此你在上了人生巅峰"<<endl;
							cout<<b<<"挑战成功";  
							}	
						if(a7==2){
							cout<<"你将她打到在地，她立刻报警，警察抓住了你，你要坐牢一辈子"<<endl;
							cout<<"game over";
						}
					 } 
						if(a4==2){
					 	cout<<"老板说你要努力干活，做得好加工资"<<endl;
					 	cout<<"你现在工资是6000元一个月，奖金500"<<endl;
					 	int a5;
					 	cout<<"你要做什么"<<endl;
					 	cout<<"1买生活用品 2将手上的90000元存80000元在银行";
					 	cin>>a5;
					 	int a6;
						 if(a5==1){
						 	cout<<"你去了商店，那里有很多商品，你买了电视，零食，和一些要用的东西，你的钱还剩88654"<<endl; 
						 	cout<<"你要干什么？"<<endl;
						 	cout<<"1去上班 2睡觉"; 
						 	cin>>a6;
						 	if(a6==2)
						 	{
						 		cout<<"你立刻睡着了，等你醒来时已经过去了5天，你急急忙忙跑去上班，老板把你辞职了"<<endl;
						 		cout<<"你很伤心，这时银行给你发短信：对不起，您的钱被黑客转走了"<<endl;
						 		cout<<"你承受不住这打击，心脏病突发死掉了"<<endl;
						 		cout<<"game over";
						 		return 0;
							 }
						 } 
					
					
						 if(a5==2)
						 {
						 	cout<<"你成功存好钱，利息1000每个月"<<endl;
						 	cout<<"你要干什么？"<<endl;
						 	cout<<"1去上班 2睡觉";
						 	cin>>a6;
			                
							 	if(a6==1)
						 	{
						 	    cout<<"由于你十分勤奋，你的老板给你加薪升职"<<endl;
						 	    cout<<"你现在是总经理，7000元一个月奖金700";
						 	    cout<<"你十分努力，最终变成了老板，有个女孩喜欢上了你，她想你表白";
						 	    cout<<"你决定 1加她微信  2不理她";
						 	    int a8;
						 	    cin>>a8;
						 	    if(a8==2){
						 	    	cout<<"她很伤心，第2天她带着一堆人将你打死了";
						 	    	cout<<"原来她时世界首富的女儿";
						 	    	cout<<"game over";
								 }
								 if(a8==1){
						 	    	cout<<"她很开心，慢慢的你和她相爱了"<<endl;
						 	    	cout<<"她说马上和你结婚"<<endl;
						 	    	cout<<"结婚那天有许多人过来了"<<endl;
						 	    	cout<<"在哪以后你和她幸福的生活在一起"<<endl;
						 	    	cout<<b<<"挑战成功";
								 }
							 }
						 }
					 }
				  } 
			}
		}
	
	 } 
	 
	 if(a==2)
	 {
	  int b1;
	  cout<<"你的上司让你去参加一个反恐任务，十分危险你要去吗？"<<endl;
	  cout<<"1去 2不去"<<endl;
	  cin>>b1;
	  if(b1==1){
	  	cout<<"你在战斗中被人杀死了"<<endl;
	  	cout<<"game over";
	  }	
	  if(b1==2){
	  	cout<<"你幸存的活了下来，去参加的人几乎都阵亡了"<<endl;
	  	cout<<"你们每天都要进行严格的训练，身体变得十分强壮"<<endl;
		cout<<"这天你走在回家的路上，你被一个人打劫了你要怎么办？";
		cout<<"1给他钱 2将他抓起来"<<endl;
		int b2;
		cin>>b2;
		if(b2==1){
			cout<<"他看你这么老实就杀了你"<<endl;
			cout<<"game over";
		} 
		if(b2==2){
			cout<<"你和他打了起来"<<endl;
			cout<<"由于你受过专业的训练，你很快就打败他了，将他带去警察局"<<endl;
			cout<<"你被授予锦旗叫:见义勇为"<<endl;
			cout<<"在你开心时，有人将你抓走原来是强盗的老大，因为你抓走了老二他要报复你"<<endl;
			cout<<"你忍受着折磨，在你快撑不住时你的伙伴冲了进来，将他们全部抓住"<<endl	;
		
			cout<<"后来你退出了部队，安详晚年"<<endl;
			cout<<b<<"挑战成功";
		}
	  }
	 }
	  if(a==3)
	 {
	     cout<<"你是一个流浪在街头的乞丐"<<endl;
	     cout<<"有一天你在要饭时，有个人摔伤了需要帮助，你要帮他吗"<<endl;
		 cout<<"1帮 2不帮";
		 int c;
		 cin>>c; 
	     if(c==1)
	     {
	     	cout<<"他被你送去医院，医生治好后他十分感谢你，就给了你一份工作和一些衣物"<<endl;
	     	cout<<"第二天你去了他的公司，开始上班，有个人故意找茬撞了你随后大吼道：走路没看路啊！"<<endl;
	     	cout<<"你决定1和老板说  	2不理他";
	     	int c1;
	     	cin>>c1;
	     	if(c1==2)
	     	{
	     		cout<<"他见你不理他就生气了，当下班后你被他毒打了一顿，又上班了几天，你因为心脏病去世了";
	     		while(1000000000000){
	     			cout<<"game over";
				 }
			 }
			 if(c1==1)
			 {
			 	cout<<"老板知道此事后立刻开除了那个员工，跟其他人说:要是再搞"<<b<<"就立刻开除"<<endl; 
			 	cout<<"其他员工都很害怕，不过有一个除外"<<endl; 
			 	cout<<"你下班后，"<<endl; 
			 }
		 }
		 if(c==2)
		 {
		 	cout<<"你当做什么也没看到就走了，你错过了一个赚钱的机会！"<<endl; 
		 
		 }
	 }
	return 0;
}*/
