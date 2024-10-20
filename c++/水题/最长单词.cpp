#include<bits/stdc++.h>
using namespace std;
char a[510];
int mx,num,mar;
int main()
{
	gets(a+1);
	for(int i=1;i<=strlen(a+1);i++)
	{
		if(a[i]==' '||a[i]=='.')
		{
			if(num>mx)
			{
				mx=num;
				mar=i-mx;
			}
			num=0;
		}
		else
		num++;
	}
	for(int i=mar;i<=mar+mx-1;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
