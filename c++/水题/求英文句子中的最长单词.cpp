#include<bits/stdc++.h>
using namespace std;
char a[510]; 
int mx,num,mar;
int main()
{
	gets(a+1);
	a[strlen(a+1)+1]='1';
	for(int i=1;i<=strlen(a+1)+1;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			num++;
		}
		else
		{
			if(num>mx)
			{
				mx=num;
				mar=i-mx;
			}
			num=0;
		}
	}
	for(int i=mar;i<=mar+mx-1;i++)
	{
		cout<<a[i];
	}
	return 0;
}
