
#include<bits/stdc++.h>
using namespace std;
string minn,x;
int n;
int main()
{
	
	cin>>n;
	cin>>minn;
	for(int i=2;i<=n;i++)
	{
		cin>>x;
		if(x<minn)
			minn=x;
	}
	cout<<minn;
	return 0;
}
