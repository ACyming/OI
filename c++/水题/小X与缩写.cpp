#include<bits/stdc++.h>
using namespace std;
char a[9999999];
int len;
int b;
int main()
{
	cin.getline(a+1,255);
	len=strlen(a+1);
	for(int i=1;i<=len;i++)
	{
		if(a[i]=='(')
		{
			b=1;
			i++;
			if(a[i]>='a'&&a[i]<='z') 
			printf("%c",a[i]-32);	
			else
			printf("%c",a[i]);	
			while(a[i]!=')')
			{
				i++;
				if(a[i]==' ')
				{
					i++;
					if(a[i]>='a'&&a[i]<='z') 
					printf("%c",a[i]-32);	
					else
					printf("%c",a[i]);	
				}
			}
			b=0;
		} 
		else
		{
			if(b!=1)
			cout<<a[i];
		}
	}
	return 0;
}
