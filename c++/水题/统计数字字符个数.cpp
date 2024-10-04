#include<stdio.h>
#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int n = 0;
	char str[256];
	gets(str);  
    int len;
	len=strlen(str); 
   // printf("%d\n",len);
	for (int i=0; i<len; i++){
		if (str[i]>='0' && str[i]<='9')
			n++;
	}
 
		printf("%d",n);
	return 0;
 
 
 }
