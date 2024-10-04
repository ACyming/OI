#include<bits/stdc++.h>
using namespace std;
int n,m,mp[101][101];
int cnt,ans;
int dy[9]={0,1,-1,0,0,1,1,-1,-1};
int dx[9]={0,0,0,-1,1,1,-1,1,-1};
bool hs(int x)
{
	if(x==2)
	{
		return true;
	}
	else if (x<=1)
	{
		return false;
	}
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		return false;
	}
	return true;
}
void hs2(int x,int y)
{
	int ccnt=0;
	for(int i=1;i<=8;i++)
	{
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(xx>=1 && xx<=n && yy>=1 && yy<=m && hs(mp[xx][yy]))
		{
			cnt++;
		}
	}
	if(cnt==0)
//	cout<<mp[x][y]<<endl;
	ans++;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mp[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(hs(mp[i][j]))
			{
				cnt=0;
				hs2(i,j);
				
			}
		}
	}
	cout<<ans;
	return 0;
}
Chen5536134
