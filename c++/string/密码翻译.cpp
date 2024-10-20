#include<bits/stdc++.h>
using namespace std;
char a[9999999];
int main()
{
	
	scanf("%s",a);
	long long  l=strlen(a+1);
	for(int i=1;i<=l;i++)
	{
		if(a[i]>='a'&&a[i]<='y'||a[i]>='A'&&a[i]<='Y')
		{
			a[i]+=1;
		}
		else 
		{
			if(a[i]=='Z')a[i]='A';
			
			else if(a[i]=='z')a[i]='a';
		}
	}
	for(int i=1;i<=l;i++)
	{
		cout<<a[i];
	}
	return 0;
}
