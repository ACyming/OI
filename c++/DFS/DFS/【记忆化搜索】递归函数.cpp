#include<bits/stdc++.h>
using namespace std;
long long s[100][100][100],t;
long long w(long long a,long long b,long long c)
{
	if(a<=0||b<=0||c<=0)
	{
		return 1;
	}
	else
	{
		if(a>20||b>20||c>20)
		{
			return w(20,20,20);
		}
		else
		{
			if(s[a][b][c]>0)
			{
				return s[a][b][c];
			}
			else
			{
				if(a<b&&b<c)
				{
					t=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
				}
				else
				{
					t=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
				}
			}
		}
	}
	s[a][b][c]=t;
	return s[a][b][c];
}
int main()
{
	long long a1,b1,c1;
	cin>>a1>>b1>>c1;
	cout<<w(a1,b1,c1);
	return 0;
}
