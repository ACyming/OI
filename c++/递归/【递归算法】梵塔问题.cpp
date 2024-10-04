#include<bits/stdc++.h>
using namespace std;
int m,a,b,c,p=1,n;
char x='A',y='B',z='C';
int t(char x,char y,char z,int m)
{
	if(m==1)
	{
		
		cout<<x<<">"<<z<<endl;
		p++;
	}
	else
	{
		t(x,z,y,m-1);
		cout<<x<<">"<<z<<endl;
		p++;
		t(y,x,z,m-1);
	}
}
int main()
{
	cin>>n;
	t(x,y,z,n);
	return 0;
} 
