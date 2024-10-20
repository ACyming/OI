#include<bits/stdc++.h>
using namespace std;
long long n,sum,ans,a[10],x,s;
int main(){
	cin>>n;
	for(;;)
	{
		s=0;
        x++;
		for(int i=1; i<=9; i++)
		{
			if(a[i]>0)
			s++;
		}	
		if(s==9)
		{
			cout<<ans;
			return 0;
		}
		sum=n*x;
		ans=sum;
		while(sum)
		{
			a[sum%10]++;
			sum/=10;
		}
	}
	return 0;
}

