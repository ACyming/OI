
#include<bits/stdc++.h>
using namespace std;
int n,i,a1,a2,a3,a4,a5;
string a[25];
bool cmp(string a,string b){
	return a+b>b+a;
}
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++)	
	cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(i=1;i<=n;i++)	
	cout<<a[i];
	return 0;

 } 
