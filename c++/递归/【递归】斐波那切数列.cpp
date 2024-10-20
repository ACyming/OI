#include<bits/stdc++.h>
using namespace std;
int dfs(int n)
{
	if(n==2||n==3) return 1;
	else return dfs(n-1)+dfs(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<dfs(n);
	return 0;
}
