#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char zzzzzz;
    int y,g=3,j=0,x=100,m,gg,xx,kang=0,b,ggggg=1;
    string k="��";
    int xiaodao=0,changjian=0,zhayao=0,xiebao=0;
    cout<<"���:";
    cin>>a;
    while(1)
    {
    	cout<<"Ŀǰ"<<k<<"װ��"<<" "<<"������:"<<g<<" "<<"���"<<j<<" "<<x<<"��Ѫ"<<setw(80)<<"5.���ةd(�R���Q*)o"<<endl; 
		cout<<"����������Ҫ��ʲô:"<<endl; 
		cout<<"1.���boss"<<endl;
		cout<<"2.��С����"<<endl;
		cout<<"3.����װ��"<<endl;
		cout<<"4.����"<<endl;
		cin>>y;
		if(y==3)
		{	
			while(1)
			{
				cout<<"��ӭ�������̵�,������Ҫ��Щʲô?"<<endl;
				cout<<"Ŀǰ�н��"<<j<<endl;
				cout<<"1.С��  ������7  10���"<<endl;
				cout<<"2.����  ������18  30���"<<endl;
				cout<<"3.ըҩ  ������30  20���"<<endl;
				cout<<"4.Ѫ��  �ָ�10��Ѫ  5���"<<endl;
				cout<<"5.ͭ��  ����4��Ѫ  20���"<<endl;
				cout<<"6.����  ����8��Ѫ  40���"<<endl;
				cout<<"7.���  ����16��Ѫ  80���"<<endl;
				cout<<"0.�˳�"<<endl;
				cin>>m;
				if(m==1)
				{
					if(j>=10)
					{
						xiaodao++;
						j=j-10;
						cout<<"����ɹ�!";
						cout<<"Ŀǰ����:"<<endl;
						cout<<xiaodao<<"С��"<<" "<<changjian<<"����"<<" "<<zhayao<<"ըҩ"<<" "<<xiebao<<"Ѫ��"<<endl<<endl; 
					}
					else
					{
						cout<<"��Ҳ���!"<<endl<<endl;
					}
				}
				if(m==2)
				{
					if(j>=30)
					{
						changjian++;
						j=j-30;
						cout<<"����ɹ�!";
						cout<<"Ŀǰ����:"<<endl;
						cout<<xiaodao<<"С��"<<" "<<changjian<<"����"<<" "<<zhayao<<"ըҩ"<<" "<<xiebao<<"Ѫ��"<<endl<<endl; 
					}
					else
					{
						cout<<"��Ҳ���!"<<endl<<endl;
					}
				}
				if(m==3)
				{
					if(j>=20)
					{
						zhayao++;
						j=j-20;
						cout<<"����ɹ�!";
						cout<<"Ŀǰ����:"<<endl;
						cout<<xiaodao<<"С��"<<" "<<changjian<<"����"<<" "<<zhayao<<"ըҩ"<<" "<<xiebao<<"Ѫ��"<<endl<<endl; 
					}
					else
					{
						cout<<"��Ҳ���!"<<endl<<endl;
					}
				}
				if(m==4)
				{
					if(j>=5)
					{
						xiebao++;
						j=j-5;
						cout<<"����ɹ�!";
						cout<<"Ŀǰ����:"<<endl;
						cout<<xiaodao<<"С��"<<" "<<changjian<<"����"<<" "<<zhayao<<"ըҩ"<<" "<<xiebao<<"Ѫ��"<<endl<<endl; 
					}
					else
					{
						cout<<"��Ҳ���!"<<endl<<endl;
					}
				}
				if(m==5)
				{
					if(j>=20)
					{
						k="ͭ��";
						j=j-20;
						kang=kang+4;
						cout<<"����ɹ�!";
						cout<<"Ŀǰװ��:"<<endl;
						cout<<k<<endl; 
						cout<<"Ŀǰ����:"<<endl;
						cout<<xiaodao<<"С��"<<" || "<<changjian<<"����"<<" || "<<zhayao<<"ըҩ"<<" || "<<xiebao<<"Ѫ��"<<endl<<endl; 
					}
					else
					{
						cout<<"��Ҳ���!"<<endl<<endl;
					}
				}
				if(m==6)
				{
					if(j>=40)
					{
						k="����";
						j=j-40;
						kang=kang+8;
						cout<<"����ɹ�!";
						cout<<"Ŀǰװ��:"<<endl;
						cout<<k<<endl; 
						cout<<"Ŀǰ����:"<<endl;
						cout<<xiaodao<<"С��"<<" || "<<changjian<<"����"<<" || "<<zhayao<<"ըҩ"<<" || "<<xiebao<<"Ѫ��"<<endl<<endl; 
					}
					else
					{
						cout<<"��Ҳ���!"<<endl<<endl;
					}
				}
				if(m==7)
				{
					if(j>=80)
					{
						k="���";
						kang=kang+16;
						j=j-80;
						cout<<"����ɹ�!";
						cout<<"Ŀǰװ��:"<<endl;
						cout<<k<<endl; 
						cout<<"Ŀǰ����:"<<endl;
						cout<<xiaodao<<"С��"<<" || "<<changjian<<"����"<<" || "<<zhayao<<"ըҩ"<<" || "<<xiebao<<"Ѫ��"<<endl<<endl; 
					}
					else
					{
						cout<<"��Ҳ���!"<<endl<<endl;
					}
				}
				if(m==0)
				{
					cout<<"лл�ݹ�!"<<endl<<endl;
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
					cout<<"С����Ѫ��:"<<xx<<" "<<"С���޹�����:"<<gg<<endl<<endl;
					cout<<a<<"�Ļغ�:"<<endl;
					cout<<"������:"<<g<<endl;
					cout<<"1.�������Ѫ"<<endl;
					cout<<"2.����"<<endl;
					cout<<"3.����"<<endl;
					cin>>b;
					if(b==3)
					{
						zzzzzz='^';
						break;
					}
					if(b==2)
					{
						cout<<"Ŀǰ����:"<<endl;
						cout<<xiaodao<<"С��.1"<<" || "<<changjian<<"����.2"<<" || "<<zhayao<<"ըҩ.3"<<" || "<<xiebao<<"Ѫ��.4"<<" || "<<"����.5"<<endl;
						cin>>m;
						if(m==5)
						{
							g=3;
							cout<<"����"<<endl<<endl;
						}
						if(m==1)
						{
							if(xiaodao>0)
							{
								cout<<"�ֳ�С��"<<endl<<endl;
								g=7;
							}
						}
						if(m==2)
						{
							if(changjian>0)
							{
								cout<<"�ֳֳ���"<<endl<<endl;
								g=18; 
							}
						}
						if(m==3)
						{
							if(zhayao>0)
							{
								cout<<"�ֳ�ըҩ"<<endl<<endl;
								g=30;
							}
						}
						if(m==4)
						{
							if(xiebao>0)
							{
								cout<<"�ֳ�Ѫ��"<<endl<<endl;
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
						cout<<a<<"��Ѫ��:"<<x<<" "<<"С���޵�Ѫ��"<<xx<<endl<<endl;
						if(g==30)
						{
							g=0;
						}
					}
					cout<<"����غ�:"<<endl<<endl;
					cout<<"����ʹ���˹���"<<endl;
					x=x-gg;
					cout<<a<<"��Ѫ��:"<<x<<" "<<"С���޵�Ѫ��"<<xx<<endl<<endl;
				}
				if(zzzzzz=='^')
				{	
					zzzzzz='0';
					j=j-5;
					cout<<"����!"<<"-5���"<<endl<<endl;
					system("pause");
				}
				else
				{
					if(xx<=0&&x<=0)
					{
						cout<<"������,ƽ��!"<<endl<<endl;
						system("pause");
					}
					else
					{
						if(xx>x)
						{
							j=j-10;
							cout<<"ʧ��!"<<"-10���"<<endl<<endl;
							system("pause");
						}
						else
						{
							if(xx<x)
							{
								int jj=rand()%50+10;
								j=j+jj;
								cout<<"��ϲ���ʤ!"<<" "<<"+"<<jj<<"���"<<endl<<endl;
								system("pause");
							}
						}
					}
				}
			}
			else
			{
				cout<<"Ѫ������!!!!!!!"<<endl<<endl;
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
					cout<<"��bossѪ��:"<<xx<<" "<<"��boss������:"<<gg<<endl<<endl;
					cout<<a<<"�Ļغ�:"<<endl;
					cout<<"������:"<<g<<endl;
					cout<<"1.�������Ѫ"<<endl;
					cout<<"2.����"<<endl;
					cout<<"3.����"<<endl;
					cin>>b;
					if(b==3)
					{
						zzzzzz='^';
						break;
					}
					if(b==2)
					{
						cout<<"Ŀǰ����:"<<endl;
						cout<<xiaodao<<"С��.1"<<" || "<<changjian<<"����.2"<<" || "<<zhayao<<"ըҩ.3"<<" || "<<xiebao<<"Ѫ��.4"<<" || "<<"����.5"<<endl;
						cin>>m;
						if(m==5)
						{
							g=3;
							cout<<"����"<<endl<<endl;
						}
						if(m==1)
						{
							if(xiaodao>0)
							{
								cout<<"�ֳ�С��"<<endl<<endl;
								g=7; 
							}
						}
						if(m==2)
						{
							if(changjian>0)
							{
								cout<<"�ֳֳ���"<<endl<<endl;
								g=18; 
							}
						}
						if(m==3)
						{
							if(zhayao>0)
							{
								cout<<"�ֳ�ըҩ"<<endl<<endl;
								g=30;
							}
						}
						if(m==4)
						{
							if(xiebao>0)
							{
								cout<<"�ֳ�Ѫ��"<<endl<<endl;
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
						cout<<a<<"��Ѫ��:"<<x<<" "<<"��boss��Ѫ��"<<xx<<endl<<endl;
						if(g==30)
						{
							g=0;
						}
					}
					cout<<"��boss�غ�:"<<endl<<endl;
					cout<<"��bossʹ���˹���"<<endl;
					x=x-gg;
					cout<<a<<"��Ѫ��:"<<x<<" "<<"��boss��Ѫ��"<<xx<<endl<<endl;
				}
				if(zzzzzz=='^')
				{
					zzzzzz='0';
					j=j-10;
					cout<<"����!"<<"-10���"<<endl<<endl;
					system("pause");
				}
				else
				{
					if(xx<=0&&x<=0)
					{
						cout<<"������,ƽ��!"<<endl<<endl;
						system("pause");
					}
					else
					{
						if(xx>x)
						{
							j=j-25;
							cout<<"ʧ��!"<<"-25���"<<endl<<endl;
							system("pause");
						}
						else
						{
							if(xx<x)
						{
							int jj=rand()%70+30;
							j=j+jj;
							cout<<"��ϲ���ʤ!"<<" "<<"+"<<jj<<"���"<<endl<<endl;
							system("pause");
						}
						}
					}
				}
			}
			else
			{
				cout<<"Ѫ������!"<<endl<<endl;
				system("pause");
			}
		}
		if(y==5)
		{
			int jjjj=5;
			if(ggggg==1)
			{
				system("color 1");
				cout<<"���㷢����!  w(`��`)w"<<endl;
				system("pause");
				system("color 2");
				cout<<"����һ�����춯�ص���Ϣ!  �t���F���䣩�s"<<endl;
				system("pause");
				system("color D");
				cout<<"��ʲô��?  (�ţ� 3��)��"<<endl;
				system("pause");
				system("color 5");
				cout<<"������ʲô��?  w(�R-�Q)w"<<endl;
				system("pause");
				system("color C");
				cout<<"�������̺�����������!"<<endl;
				system("pause");
				system("color 4");
				cout<<"����  (�R�بQ)"<<endl;
				system("pause");
				system("color 6");
				cout<<"������˧������  (/�R���Q)/"<<endl;
				system("pause");
			}
			system("color 7");
			cout<<"����	1.˧	2.��˧	3.��˧	4.��"<<endl;
			int yyyy;
			cin>>yyyy;
			if(yyyy==1)
			{
				cout<<"���۹����+5���!"<<endl<<endl;
				j=j+5;
				cout<<j<<"���"<<endl;
				ggggg=0;
			}
			if(yyyy==2)
			{
				cout<<"��ʶ�����+10���!"<<endl<<endl;
				j=j+10;
				cout<<j<<"���"<<endl;
				ggggg=0;
			}
			if(yyyy==3)
			{
				cout<<"��������+20���!"<<endl<<endl;
				j=j+20;
				cout<<j<<"���"<<endl;
				ggggg=0;
			}
			if(yyyy==4)
			{
				cout<<"������,�Ҽ�ס����!"<<endl;
				system("pause");
				ggggg=0;
				while(1)
				{
					cout<<"����	1.˧	2.��"<<endl;
					cin>>yyyy;
					if(yyyy==1)
					{
						cout<<"�⻹���!"<<endl<<endl;
						break;
					}
					if(yyyy==2)
					{
						cout<<"��ô��ô��ʶ��?���ҿ���"<<jjjj<<"���!"<<endl;
						j=j-jjjj;
						jjjj=jjjj+5;
						cout<<j<<"���"<<endl;
					}
				}
			}
		}
		if(y==4)
		{
			cout<<"1.��Ѫ	2.�鿴����"<<endl;
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
					cout<<"û��Ѫ��ʣ��!"<<endl<<endl; 
				}
			}
			if(vvvvv==2)
			{
				cout<<"Ŀǰ����:"<<endl;
				cout<<xiaodao<<"С��.1"<<" || "<<changjian<<"����.2"<<" || "<<zhayao<<"ըҩ.3"<<" || "<<xiebao<<"Ѫ��.4"<<" || "<<"����.5"<<endl;
				cin>>m;
				if(m==5)
				{
					g=3;
					cout<<"����"<<endl<<endl;
				}
				if(m==1)
				{
					if(xiaodao>0)
					{
						cout<<"�ֳ�С��"<<endl<<endl;
						g=7;
					}
					else
					{
						cout<<"δ���!"<<endl<<endl;
					}
				}
				if(m==2)
				{
					if(changjian>0)
					{
						cout<<"�ֳֳ���"<<endl<<endl;
						g=18; 
					}
					else
					{
						cout<<"δ���!"<<endl<<endl;
					}
				}
				if(m==3)
				{
					if(zhayao>0)
					{
						cout<<"�ֳ�ըҩ"<<endl<<endl;
						g=30;
					}
					else
					{
						cout<<"�����þ�,����ʣ��!"<<endl<<endl; 
					}
				}
				if(m==4)
				{
					if(xiebao>0)
					{
						cout<<"�ֳ�Ѫ��"<<endl<<endl;
					}
					else
					{
						cout<<"�����þ�,����ʣ��!"<<endl<<endl; 
					}
				}
			}
		}
	}
	return 0;
}
