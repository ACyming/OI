#include<iostream>
#include<algorithm>
using namespace std;
int n,m,s,s1,s2;
char a[25005],b[25005];
void dfs(int cs,int t)
{
	if(s==25000) return;
	if(cs==n+1) 
	{
		if(s1>=1&&s2>=2)
		{
		   	s++;
			for(int i=1;i<=n;i++)
			{
		   		cout<<b[i];
			}
			cout<<endl;
	   	}
	    return;
	}
	for(int i=t;i<=m;i++)
	{
		b[cs]=a[i];
		if(b[cs]=='a'||b[cs]=='e'||b[cs]=='i'||b[cs]=='o'||b[cs]=='u')
		{
			s1++;
		}
		else 
		{
			s2++;
		}
		dfs(cs+1,i+1);
		if(b[cs]=='a'||b[cs]=='e'||b[cs]=='i'||b[cs]=='o'||b[cs]=='u') 
		{
			s1--;
		}
		else 
		{
			s2--;
		}
		b[cs]=0;
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	 cin>>a[i];
	sort(a+1,a+m+1);//从小到大排序
	dfs(1,1);
}
