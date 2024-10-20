#include<bits/stdc++.h>
using namespace std;
string name,top;
char ganbu,xibu;
long long qimo,banji,lunwen,n,s,maxx=-1,sum;
int main()
{

	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		s=0;
		cin>>name;
		cin>>qimo>>banji>>ganbu>>xibu>>lunwen;
		if(qimo>80&&lunwen>=1)	s+=8000;
		if(qimo>85&&banji>80)	s+=4000;
		if(qimo>85&&xibu=='Y')	s+=1000;
		if(banji>80&&ganbu=='Y')s+=850;
		if(qimo>90)	s+=2000;
		if(s>maxx)	maxx=s,top=name;
		sum+=s;
	}
	cout<<top<<endl<<maxx<<endl<<sum;
	return 0;
}