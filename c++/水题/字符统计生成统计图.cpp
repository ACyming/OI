#include<bits/stdc++.h>
using namespace std;
int maxn=-1;
char a[9999],m,x;
int cnt[99999];
int main()
{
	gets(a+1);
	int l=strlen(a+1);
	for(int i=1;i<=l;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]+=32;
		}
	}
	for(int i=1;i<=l;i++) cnt[a[i]-'a'+1]++;
	for(int i=1;i<=26;i++)
	{
		if(cnt[i]>maxn) maxn=cnt[i];
	}
	cout<<maxn<<endl;
	for(int i=maxn;i>=1;i--)
	{
		for(int j=1;j<=26;j++)
		{
			if(cnt[j]>=i)
			{
				cout<<"# ";
			}
			else 
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	for(int i=97;i<=122;i++) cout<<char(i-32)<<' ';
	return 0;
}
