#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"��ӭ��������С��Ϸ"<<endl;
	cout<<"���Ǹ�������Ϸ"<<endl;
	int a;
	string b;
	cout<<"��������"<<endl;
	b="�ܼ���"; 
	cout<<"�ܼ���"<<endl<<"���"<<b<<endl; 
	cout<<"ѡ��ְҵ 1��ؤ 2��ؤ 3��ؤ 5��ؤ 6��ؤ 7��ؤ 8��ؤ 9��ؤ 10��ؤ ......��ؤ"<<endl;
	cin>>a;	
	if(a>=1)
 {
	 	cout<<"ѡ��ɹ�!"<<endl;
	    cout<<"����һ�������ڽ�ͷ����ؤ"<<endl;
	     cout<<"��һ������Ҫ��ʱ���и���ˤ������Ҫ��������Ҫ������"<<endl;
		cout<<"1�� 2����"<<endl;
		 int c;
		 cin>>c; 
	     if(c==1)
	     {
	     	cout<<"��������ȥҽԺ��ҽ���κú���ʮ�ָ�л�㣬�͸�����һ�ݹ�����һЩ����"<<endl;
	     	cout<<"�ڶ�����ȥ�����Ĺ�˾����ʼ�ϰ࣬�и��˹����Ҳ�ײ��������������·û��·����"<<endl;
	     	cout<<"����� 	1���ϰ�˵  	2������";
	     	int c1;
	     	cin>>c1;
	     	if(c1==2)
	     	{
	     		cout<<"�����㲻�����������ˣ����°���㱻��������һ�٣����ϰ��˼��죬����Ϊ���ಡȥ����";
	     		while(1000000000000){
	     			cout<<"  game over";
				 }
			 }
			 if(c1==1)
			 {
			 	cout<<"�ϰ�֪�����º����̿������Ǹ�Ա������������˵:Ҫ���ٸ�"<<b<<"�����̿���"<<endl; 
			 	cout<<"����Ա�����ܺ��£�������һ������"<<endl; 
			 	cout<<"���°��"<<endl; 
			 }
		 }
		 if(c==2)
		 {
		 	cout<<"�㵱��ʲôҲû���������ˣ�������һ��׬Ǯ�Ļ��ᣡ"<<endl; 
		 	cout<<"���˲����и������˷��˧ǰ�������㡣"<<endl;
			cout<<"���������֪������Ϸ"<<endl;
			cout<<"��Ϸ��ʼ:"<<endl;
			_sleep(3000);
		    char zzzzzz;
		    int y,g=3,j=0,x=100,m,gg,xx,kang=0,bb,ggggg=1;
		    string k="��";
		    int xiaodao=0,changjian=0,zhayao=0,xiebao=0;
		    while(1)
		    {
		    	cout<<"Ŀǰ"<<k<<"װ��"<<" "<<"������:"<<g<<" "<<"���"<<j<<" "<<x<<"��Ѫ"<<setw(85)<<"4.���ةd(�R���Q*)o"<<endl; 
				cout<<"����������Ҫ��ʲô:"<<endl; 
				cout<<"1.��С����"<<endl;
				cout<<"2.����װ��"<<endl;
				cout<<"3.����"<<endl;
				cin>>y;
				if(y==2)
				{
					while(1)
					{
						cout<<"��ӭ����˧���̵�,������Ҫ��Щʲô?"<<endl;
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
								cout<<xiaodao<<"С��"<<" "<<changjian<<"����"<<" "<<zhayao<<"ըҩ"<<" "<<xiebao<<"Ѫ��"<<endl<<endl; 
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
								cout<<xiaodao<<"С��"<<" "<<changjian<<"����"<<" "<<zhayao<<"ըҩ"<<" "<<xiebao<<"Ѫ��"<<endl<<endl; 
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
								cout<<xiaodao<<"С��"<<" "<<changjian<<"����"<<" "<<zhayao<<"ըҩ"<<" "<<xiebao<<"Ѫ��"<<endl<<endl; 
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
							cout<<"С����Ѫ��:"<<xx<<" "<<"С���޹�����:"<<gg<<endl<<endl;
							cout<<b<<"�Ļغ�:"<<endl;
							cout<<"������:"<<g<<endl;
							cout<<"1.�������Ѫ"<<endl;
							cout<<"2.����"<<endl;
							cin>>bb;
							if(bb==3)
							{
								zzzzzz='^';
								break;
							}
							if(bb==2)
							{
								cout<<"Ŀǰ����:"<<endl;
								cout<<xiaodao<<"С��.1"<<" "<<changjian<<"����.2"<<" "<<zhayao<<"ըҩ.3"<<" "<<xiebao<<"Ѫ��.4"<<" "<<"����.5"<<endl;
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
								cout<<b<<"��Ѫ��:"<<x<<" "<<"С���޵�Ѫ��"<<xx<<endl<<endl;
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
						if(xx<x)
						{
							int jj=rand()%50+10;
							j=j+jj;
							cout<<"��ϲ���ʤ!"<<" "<<"+"<<jj<<"���"<<endl<<endl;
							system("pause");
						}
						if(xx>x)
						{
							j=j-10;
							cout<<"ʧ��!"<<endl<<endl;
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
				if(y==3)
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
						cout<<xiaodao<<"С��.1"<<" "<<changjian<<"����.2"<<" "<<zhayao<<"ըҩ.3"<<" "<<xiebao<<"Ѫ��.4"<<" "<<"����.5"<<endl;
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
			system("pause");
			cout<<"����������Ϸ�����˧Ҳ�������㣬����ȥ������"<<endl;
			cout<<"�ڶ�����ȥ�˷��˧�Ĺ�˾����ʼ�ϰ࣬�и��˹����Ҳ�ײ��������������·û��·����"<<endl;
	     	cout<<"����� 	1�ͷ��˧˵  	2������";
	     	int c1;
	     	cin>>c1;
	     	if(c1==2)
	     	{
	     		cout<<"�����㲻�����������ˣ����°���㱻��������һ�٣����ϰ��˼��죬����Ϊ���ಡȥ����";
	     		while(1000000000000){
	     			cout<<"  game over";
				 }
			 }
			 if(c1==1)
			 {
			 	cout<<"�ϰ�֪�����º����̿������Ǹ�Ա������������˵:��Ҫ���ٸ�����ؤ�����̿���!��"<<endl; 
			 	cout<<"����Ա�����ܺ��£�������һ������"<<endl; 
			 	cout<<"���°��"<<endl; 
			 }
		 }
	}
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"��ӭ��������С��Ϸ"<<endl;
	cout<<"���Ǹ�������Ϸ"<<endl;
	int a;
	string b;
	cout<<"��������"<<endl;
	cin>>b;
    cout<<"���"<<b<<endl; 
	cout<<"ѡ��ְҵ 1���� 2�ؾ� 3��ؤ 4�ϰ�";
	cin>>a;	
	if(a==1||a==2||a==3||a==4){
		cout<<"ѡ��ɹ�"<<endl;
	}
    else{
      	while(a!=1||a!=2||a!=3||a!=4)
	    {
			cout<<"ѡ��ʧ��";
			cin>>a;
			if(a==1||a==2||a==3||a==4)
			{
				break;
			}
		}
	
	  }
	if(a==1)
	{
		cout<<"��һ�죬�㱻�ϰ��뵽�칫�ң�������Ҫ��Ҫȥȥ����򹤣�һ��׬10�򣬻��н���"<<endl;
		cout<<"1����ȥ 2��ȥ"<<endl;
		int a1;
		cin>>a1;
		if(a1==1){
			cout<<"�ϰ�ʮ�ָ��ˣ�������2����Ϊ·�ѣ��������"<<endl;
			cout<<"�ո�ȥ���㱻�˰�ɱ��"<<endl;
			cout<"game over"; 
		} 
		if(a1==2)
		{
			cout<<"�ϰ��������һŭ���¾Ͱ��㳴������"<<endl;
			cout<<"��ÿ���������£��ڴ���Ǯ�Ѿ�������"<<endl;
			cout<<"1ȥ�ҹ��� 2������ȥ"<<endl;
			int a2;
			cin>>a2; 
			if(a2==2)
			{
				cout<<"���Ǯ�����ˣ�����������ڼ���......"<<endl<<"game over";
				return 0;
			}
			if(a2==1)
			{
				cout<<"��ɹ��ҵ�һ�ݹ�������Ҫȥ��"<<endl;
				cout<<"1ȥ 2��ȥ";
				int a3;
				cin>>a3;
				if(a3==2)
				{
						cout<<"��ÿ���������£��ڴ���Ǯ�Ѿ�������"<<endl;
						cout<<"���Ǯ�����ˣ�����������ڼ���......"<<endl<<"game over";
						return 0;
				 }
				 if(a3==1)
				 {
				 	cout<<"�Ǹ����ϰ�������㣬�����㵱���˾���"<<endl;
				 	cout<<"��ܿ���"<<endl;
				 	cout<<"1�������ϰ�Է� 2����"<<endl;
				 	int a4;
				    cin>>a4;
				    if(a4==1)
				 	{
				 		cout<<"�ϰ���˺ܶ������˸��绰�����ˣ�����Ա���㸶Ǯһ����4100Ԫ���㸶��3900Ԫ˵û...ûǮ��"<<endl;
				 		cout<<"��˵û�£�������ϴ��";	
				 		int a7;
				 		cout<<"1ϴ�� 2����";
				 		cin>>a7;
						if(a7==1){
							cout<<"��ԹԵ�ϴ���룬ֱ����3�졣��ȥ�ϰ�ʱ���ϰ�������ô��ô��"<<endl;
							cout<<"��˵ǰ������Է�ʱǮû�д����ͱ�������ϴ�룬���ողų���"<<endl;
							cout<<"�ϰ忴����ô��ʵ�͸�����һ��Ǯ"<<endl;
							cout<<"�Ӵ��������������۷�"<<endl;
							cout<<b<<"��ս�ɹ�";  
							}	
						if(a7==2){
							cout<<"�㽫�����ڵأ������̱���������ץס���㣬��Ҫ����һ����"<<endl;
							cout<<"game over";
						}
					 } 
						if(a4==2){
					 	cout<<"�ϰ�˵��ҪŬ���ɻ���úüӹ���"<<endl;
					 	cout<<"�����ڹ�����6000Ԫһ���£�����500"<<endl;
					 	int a5;
					 	cout<<"��Ҫ��ʲô"<<endl;
					 	cout<<"1��������Ʒ 2�����ϵ�90000Ԫ��80000Ԫ������";
					 	cin>>a5;
					 	int a6;
						 if(a5==1){
						 	cout<<"��ȥ���̵꣬�����кܶ���Ʒ�������˵��ӣ���ʳ����һЩҪ�õĶ��������Ǯ��ʣ88654"<<endl; 
						 	cout<<"��Ҫ��ʲô��"<<endl;
						 	cout<<"1ȥ�ϰ� 2˯��"; 
						 	cin>>a6;
						 	if(a6==2)
						 	{
						 		cout<<"������˯���ˣ���������ʱ�Ѿ���ȥ��5�죬�㼱��ææ��ȥ�ϰ࣬�ϰ�����ְ��"<<endl;
						 		cout<<"������ģ���ʱ���и��㷢���ţ��Բ�������Ǯ���ڿ�ת����"<<endl;
						 		cout<<"����ܲ�ס���������ಡͻ��������"<<endl;
						 		cout<<"game over";
						 		return 0;
							 }
						 } 
					
					
						 if(a5==2)
						 {
						 	cout<<"��ɹ����Ǯ����Ϣ1000ÿ����"<<endl;
						 	cout<<"��Ҫ��ʲô��"<<endl;
						 	cout<<"1ȥ�ϰ� 2˯��";
						 	cin>>a6;
			                
							 	if(a6==1)
						 	{
						 	    cout<<"������ʮ���ڷܣ�����ϰ�����н��ְ"<<endl;
						 	    cout<<"���������ܾ���7000Ԫһ���½���700";
						 	    cout<<"��ʮ��Ŭ�������ձ�����ϰ壬�и�Ů��ϲ�������㣬��������";
						 	    cout<<"����� 1����΢��  2������";
						 	    int a8;
						 	    cin>>a8;
						 	    if(a8==2){
						 	    	cout<<"�������ģ���2��������һ���˽��������";
						 	    	cout<<"ԭ����ʱ�����׸���Ů��";
						 	    	cout<<"game over";
								 }
								 if(a8==1){
						 	    	cout<<"���ܿ��ģ�������������మ��"<<endl;
						 	    	cout<<"��˵���Ϻ�����"<<endl;
						 	    	cout<<"�������������˹�����"<<endl;
						 	    	cout<<"�����Ժ�������Ҹ���������һ��"<<endl;
						 	    	cout<<b<<"��ս�ɹ�";
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
	  cout<<"�����˾����ȥ�μ�һ����������ʮ��Σ����Ҫȥ��"<<endl;
	  cout<<"1ȥ 2��ȥ"<<endl;
	  cin>>b1;
	  if(b1==1){
	  	cout<<"����ս���б���ɱ����"<<endl;
	  	cout<<"game over";
	  }	
	  if(b1==2){
	  	cout<<"���Ҵ�Ļ���������ȥ�μӵ��˼�����������"<<endl;
	  	cout<<"����ÿ�춼Ҫ�����ϸ��ѵ����������ʮ��ǿ׳"<<endl;
		cout<<"���������ڻؼҵ�·�ϣ��㱻һ���˴������Ҫ��ô�죿";
		cout<<"1����Ǯ 2����ץ����"<<endl;
		int b2;
		cin>>b2;
		if(b2==1){
			cout<<"��������ô��ʵ��ɱ����"<<endl;
			cout<<"game over";
		} 
		if(b2==2){
			cout<<"�������������"<<endl;
			cout<<"�������ܹ�רҵ��ѵ������ܿ�ʹ�����ˣ�������ȥ�����"<<endl;
			cout<<"�㱻��������:������Ϊ"<<endl;
			cout<<"���㿪��ʱ�����˽���ץ��ԭ����ǿ�����ϴ���Ϊ��ץ�����϶���Ҫ������"<<endl;
			cout<<"����������ĥ�������Ų�סʱ��Ļ����˽�����������ȫ��ץס"<<endl	;
		
			cout<<"�������˳��˲��ӣ���������"<<endl;
			cout<<b<<"��ս�ɹ�";
		}
	  }
	 }
	  if(a==3)
	 {
	     cout<<"����һ�������ڽ�ͷ����ؤ"<<endl;
	     cout<<"��һ������Ҫ��ʱ���и���ˤ������Ҫ��������Ҫ������"<<endl;
		 cout<<"1�� 2����";
		 int c;
		 cin>>c; 
	     if(c==1)
	     {
	     	cout<<"��������ȥҽԺ��ҽ���κú���ʮ�ָ�л�㣬�͸�����һ�ݹ�����һЩ����"<<endl;
	     	cout<<"�ڶ�����ȥ�����Ĺ�˾����ʼ�ϰ࣬�и��˹����Ҳ�ײ��������������·û��·����"<<endl;
	     	cout<<"�����1���ϰ�˵  	2������";
	     	int c1;
	     	cin>>c1;
	     	if(c1==2)
	     	{
	     		cout<<"�����㲻�����������ˣ����°���㱻��������һ�٣����ϰ��˼��죬����Ϊ���ಡȥ����";
	     		while(1000000000000){
	     			cout<<"game over";
				 }
			 }
			 if(c1==1)
			 {
			 	cout<<"�ϰ�֪�����º����̿������Ǹ�Ա������������˵:Ҫ���ٸ�"<<b<<"�����̿���"<<endl; 
			 	cout<<"����Ա�����ܺ��£�������һ������"<<endl; 
			 	cout<<"���°��"<<endl; 
			 }
		 }
		 if(c==2)
		 {
		 	cout<<"�㵱��ʲôҲû���������ˣ�������һ��׬Ǯ�Ļ��ᣡ"<<endl; 
		 
		 }
	 }
	return 0;
}*/
