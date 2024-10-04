#include<bits/stdc++.h>
void f(long long n)
{
	printf("%d",n%10);	
	if(n>=10)
	f(n/10);	
} 
using namespace std;
int main()              
{
	long long n;
	cin>>n;
	f(n);
	return 0;
}
