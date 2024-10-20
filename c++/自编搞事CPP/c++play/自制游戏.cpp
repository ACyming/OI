#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char zzzzzz;
    int y,g=3,j=0,x=100,m,gg,xx,kang=0,b,ggggg=1;
    string k="无";
    int xiaodao=0,changjian=0,zhayao=0,xiebao=0;
    cout<<"你叫:";
    cin>>a;
    while(1)
    {
    	cout<<"目前"<<k<<"装备"<<" "<<"攻击力:"<<g<<" "<<"金币"<<j<<" "<<x<<"点血"<<setw(80)<<"5.神秘ヾ(≧▽≦*)o"<<endl; 
		cout<<"请问你现在要做什么:"<<endl; 
		cout<<"1.打大boss"<<endl;
		cout<<"2.打小怪兽"<<endl;
		cout<<"3.购买装备"<<endl;
		cout<<"4.背包"<<endl;
		cin>>y;
		if(y==3)
		{	
			while(1)
			{
				cout<<"欢迎来到珞华商店,请问你要买些什么?"<<endl;
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
						cout<<xiaodao<<"小刀"<<" || "<<changjian<<"长剑"<<" || "<<zhayao<<"炸药"<<" || "<<xiebao<<"血包"<<endl<<endl; 
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
						cout<<xiaodao<<"小刀"<<" || "<<changjian<<"长剑"<<" || "<<zhayao<<"炸药"<<" || "<<xiebao<<"血包"<<endl<<endl; 
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
						cout<<xiaodao<<"小刀"<<" || "<<changjian<<"长剑"<<" || "<<zhayao<<"炸药"<<" || "<<xiebao<<"血包"<<endl<<endl; 
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
		if(y==2)
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
					cout<<a<<"的回合:"<<endl;
					cout<<"攻击力:"<<g<<endl;
					cout<<"1.攻击或回血"<<endl;
					cout<<"2.背包"<<endl;
					cout<<"3.逃跑"<<endl;
					cin>>b;
					if(b==3)
					{
						zzzzzz='^';
						break;
					}
					if(b==2)
					{
						cout<<"目前背包:"<<endl;
						cout<<xiaodao<<"小刀.1"<<" || "<<changjian<<"长剑.2"<<" || "<<zhayao<<"炸药.3"<<" || "<<xiebao<<"血包.4"<<" || "<<"空手.5"<<endl;
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
					if(b==1)
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
						cout<<a<<"的血量:"<<x<<" "<<"小怪兽的血量"<<xx<<endl<<endl;
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
				if(zzzzzz=='^')
				{	
					zzzzzz='0';
					j=j-5;
					cout<<"逃跑!"<<"-5金币"<<endl<<endl;
					system("pause");
				}
				else
				{
					if(xx<=0&&x<=0)
					{
						cout<<"半斤八两,平局!"<<endl<<endl;
						system("pause");
					}
					else
					{
						if(xx>x)
						{
							j=j-10;
							cout<<"失败!"<<"-10金币"<<endl<<endl;
							system("pause");
						}
						else
						{
							if(xx<x)
							{
								int jj=rand()%50+10;
								j=j+jj;
								cout<<"恭喜你获胜!"<<" "<<"+"<<jj<<"金币"<<endl<<endl;
								system("pause");
							}
						}
					}
				}
			}
			else
			{
				cout<<"血量不足!!!!!!!"<<endl<<endl;
				system("pause");
			}
		}
		if(y==1)
		{
			if(x>=1)
			{
				srand((unsigned int)time(NULL));
				xx=rand()%50+100;
				srand((unsigned int)time(NULL));
				gg=rand()%14+21;
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
					cout<<"大boss血量:"<<xx<<" "<<"大boss攻击力:"<<gg<<endl<<endl;
					cout<<a<<"的回合:"<<endl;
					cout<<"攻击力:"<<g<<endl;
					cout<<"1.攻击或回血"<<endl;
					cout<<"2.背包"<<endl;
					cout<<"3.逃跑"<<endl;
					cin>>b;
					if(b==3)
					{
						zzzzzz='^';
						break;
					}
					if(b==2)
					{
						cout<<"目前背包:"<<endl;
						cout<<xiaodao<<"小刀.1"<<" || "<<changjian<<"长剑.2"<<" || "<<zhayao<<"炸药.3"<<" || "<<xiebao<<"血包.4"<<" || "<<"空手.5"<<endl;
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
					if(b==1)
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
						cout<<a<<"的血量:"<<x<<" "<<"大boss的血量"<<xx<<endl<<endl;
						if(g==30)
						{
							g=0;
						}
					}
					cout<<"大boss回合:"<<endl<<endl;
					cout<<"大boss使用了攻击"<<endl;
					x=x-gg;
					cout<<a<<"的血量:"<<x<<" "<<"大boss的血量"<<xx<<endl<<endl;
				}
				if(zzzzzz=='^')
				{
					zzzzzz='0';
					j=j-10;
					cout<<"逃跑!"<<"-10金币"<<endl<<endl;
					system("pause");
				}
				else
				{
					if(xx<=0&&x<=0)
					{
						cout<<"半斤八两,平局!"<<endl<<endl;
						system("pause");
					}
					else
					{
						if(xx>x)
						{
							j=j-25;
							cout<<"失败!"<<"-25金币"<<endl<<endl;
							system("pause");
						}
						else
						{
							if(xx<x)
						{
							int jj=rand()%70+30;
							j=j+jj;
							cout<<"恭喜你获胜!"<<" "<<"+"<<jj<<"金币"<<endl<<endl;
							system("pause");
						}
						}
					}
				}
			}
			else
			{
				cout<<"血量不足!"<<endl<<endl;
				system("pause");
			}
		}
		if(y==5)
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
		if(y==4)
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
				cout<<xiaodao<<"小刀.1"<<" || "<<changjian<<"长剑.2"<<" || "<<zhayao<<"炸药.3"<<" || "<<xiebao<<"血包.4"<<" || "<<"空手.5"<<endl;
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
	return 0;
}
