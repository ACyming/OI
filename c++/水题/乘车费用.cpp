#include<bits/stdc++.h>
using namespace std;
double a[11];
int n;
double f[11];
int main(){
	for(int i=1;i<=10;i++)
	cin>>a[i];
	cin>>n;
	for(int i=1;i<=10;i++){
		f[i]=a[i]/i*n;
	}
	sort(f+1,f+1+10);
	cout<<f[1];
	return 0;
} 
