#include<bits/stdc++.h>
using namespace std;
string s;
int num,maxx=INT_MIN,minn=INT_MAX;
bool pd(int x)
{
	if(x<2)
	{
		return 0;
	}
	if(x==2)
	{
		return 1;
	}
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	cin>>s;
	sort(s.begin(),s.end());
//	cout<<s<<endl;
	for(int i=0;i<s.size();i++)
	{
		num++;
		if(i==s.size() || s[i]!=s[i+1])
		{
			maxx=max(maxx,num);
			minn=min(minn,num);
			num=0;
		}
		
	}
	if(pd(maxx-minn))
	{
		cout<<"Lucky Word"<<endl<<maxx-minn;
	}
	else
	{
		cout<<"No Answer"<<endl<<"0";
	}
	return 0;
}
