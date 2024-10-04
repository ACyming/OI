#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;
int cnt,k,l;
char a[101][101];
int main()
{
	for(int i=1;i<=19;i++)
	{
		for(int j=1;j<=19;j++)
		{
			a[i][j]='o';
		}
		
	 } 
	for(int i=1;i<=19;i++)
	{
		for(int j=1;j<=19;j++)
		{
			printf("%c",a[i][j]);
		}
		cout<<"\n"; 
	 } 
	 while(cnt!=365)
	 {
	 	printf("A:");
	 	scanf("%d%d",&k,&l);
	 	if(a[k][l]!='b')
	 	{
	 		a[k][l]='a';
	 		system("cls");
	 		for(int i=1;i<=19;i++)
			{
				for(int j=1;j<=19;j++)
				{
					printf("%c",a[i][j]);
				}
				cout<<"\n"; 
			}
		 } 
		 else
		 {
		 	printf("A:no\n");
		 }
	 	printf("B:");
	 	scanf("%d%d",&k,&l);
	 	if(a[k][l]!='a')
	 	{
	 		a[k][l]='b';
	 		system("cls");
	 		for(int i=1;i<=19;i++)
			{
				for(int j=1;j<=19;j++)
				{
					printf("%c",a[i][j]);
				}
				cout<<"\n"; 
			}	
	 	
		 } 
		 else
		 {
		 	printf("B:no\n");
		 }
	for(int i=1;i<=19;i++)
	 {
	 	for(int j=1;j<=19;j++)
	 	{
	 		if(a[i][j]=='a'||a[i+1][j]=='b'||a[i-1][j]=='b'||a[i][j-1]=='b'||a[i][j+1]=='b')
	 		{
	 			a[i][j]=='.';
			}
			 else
			 {
			 	if(a[i][j]=='b'||a[i+1][j]=='a'||a[i-1][j]=='a'||a[i][j-1]=='a'||a[i][j+1]=='a')
	 		 	{
	 				a[i][j]=='.';
			 	}
			 }
			 cout<<a[i][j];
		 }
		 cout<<"\n";
	 }	 
	 system("cls");
	 for(int i=1;i<=19;i++)
	{
			for(int j=1;j<=19;j++)
			{
				printf("%c",a[i][j]);
			}
			cout<<"\n"; 
		}
	 }


}
