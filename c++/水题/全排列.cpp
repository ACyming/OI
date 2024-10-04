#include<bits/stdc++.h>
using namespace std;
int l,b[10005];
char n[999999],s[999999];
void fun(int x)
{
	if(x>l)     
	{
		for(int i=1;i<=l;i++)
		{
			printf("%c",n[i]);
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=l;i++)
	{
		if(b[i]==0)
		{
			n[x]=s[i];
			b[i]=1;
			fun(x+1);
			b[i]=0;
		}
	}	
}
int main()
{
	scanf("%s",s+1);
	l=strlen(s+1);	
	fun(1);
}
