#include<iostream>
using namespace std;
int s,n;
void hs(int x)
{
	if(x==n) 
	{
		s++;return;
	}
	if(x>n) return;
	hs(x+1);
	hs(x+2);
}
int main()
{
	cin>>n;
	hs(0);
	cout<<s;
 } 
