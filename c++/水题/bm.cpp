#include<bits/stdc++.h>
using namespace std;
int ma=-999,mi=999,k,len,m1,m2;
char a[20001],b[101],c[101];
int main()
{
	gets(a);
	len=strlen(a+1);
	for(int i=1;i<=len;i++)
	{
		if(a[i]!=' ')
		{
			k++;
		}
		else if(a[i]==' ')
		{
			if(k>ma)
			{
				ma=k; m1=i;
				for(int j=m1-ma;j<=m1;j++)
				{
					b[j]=a[j];
				}
			}
			if(k<mi)
			{
				mi=k; m2=i;
				for(int j=m2-mi;j<=m2;j++)
				{
					c[j]=a[j];
				}
			}
		}
	}
	for(int i=m1-ma;i<=m1;i++)
	{
		printf("%c",b[i]);
	}
	printf("\n");
	for(int i=m2-mi;i<=m2;i++)
	{
		printf("%c",c[i]);
	}
	return 0;
}
