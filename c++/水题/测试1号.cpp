#include<bits/stdc++.h>
using namespace std;
char a[999999];
int main()
{
	int l;
	cout<<"��ӭʹ�ü��ܻ�����"<<endl<<"������������ݣ�";

	scanf("%c",a);
	l=strlen(a+1);
	for(int i=1;i<=l;i++)
	{
		a[i]+=11;
		a[i]*=6;
		a[i]/=2;
		
	}

	for(int i=1;i<=l;i++)
	{
		printf("%c",a[i]);
	}	
	
}

