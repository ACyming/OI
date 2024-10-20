#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[100000];
	int len;
	scanf("%c",a);
	len=strlen(a+1); 
	for(int i=len;i>=1;i--)
	{
		printf("%s",a[i]);
	}
	return 0;
 } 
