#include<bits/stdc++.h>
using namespace std;
int h[111][111][111];
int tt;
int w(int a,int b,int c)
{
	if(a<=0 || b<=0 || c<=0)
	{
		return 1;	
	} 
	else
	{
		if(h[a][b][c]!=0)
		{
			return h[a][b][c];
		}
		if(a>20 || b>20 || c>20)
		{
			return w(20,20,20);
		}
		else if(a<b && b<c) 
		{
			tt=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
			
		}
			else
	{
		tt=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	}
	}
	h[a][b][c]=tt;
	return h[a][b][c];
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<w(a,b,c);	
	return 0;
}
