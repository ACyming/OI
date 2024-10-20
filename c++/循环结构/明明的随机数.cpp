#include<bits/stdc++.h>
using namespace std;
int n,a[105],t[1005]={0},ans=0;
int main() {
	
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		t[a[i]]++;
	}
	for (int i=1;i<=1000;i++){
		if (t[i]!=0) {
			ans++;
		}
	}
	cout<<ans<<endl;
	for (int i=1;i<=1000;i++) {
		if (t[i]!=0) {
			cout<<i<<" ";
		}
	}
	return 0;
}

