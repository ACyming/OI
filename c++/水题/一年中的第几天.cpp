#include<bits/stdc++.h>
using namespace std;
string s;
int n,y,r;
int ans;
int m[20]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	cin>>s; 
	n=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
//	cout<<n<<endl;
	y=(s[5]-'0')*10+s[6]-'0';
//	cout<<y<<endl;
	r=(s[8]-'0')*10+s[9]-'0';
//	cout<<r<<endl;
	if((n%4==0 && n%100!=0) || n%400==0)
	{
		for(int i=0;i<y;i++)
		{
			ans+=m[i];
		} 
		ans+=r;
	}
	else
	{
		m[2]=28;
		for(int i=0;i<y;i++)
		{
			ans+=m[i];
		} 
		ans+=r;
	}
	cout<<ans;
	return 0;
}
