#include<bits/stdc++.h>
using namespace std;
void zhishu() 
{
	int f; 
	for(int i=2;i<=10000000;i++)
	{
		f=1;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				f=0;
			}
		}
		if(f==1)
		cout<<i<<" "; 
		color("i"); 
	}

}





















//#include<lyf>
//using namspace std;
int main()
{
	zhishu();
}
