#include<bits/stdc++.h>
using namespace std;
int n,m,b,l,j,s[10001],cnt,ans;
char a[10001];
int main() {
	scanf("%d%s",&n,a+1);
	m=strlen(a+1);
	for(int i=1;i<=m;i++)
	{
		if(s[a[i]]==0)
		{
			if(cnt<n)
			{
				cnt++;
				s[a[i]]++;
			}
			else 
			{
				ans++;
				s[a[i]]=2;
			}
		}
		else if(s[a[i]]==1)
		{
			cnt--;
		}
	}
	printf("%d",ans);
	return 0;
}
