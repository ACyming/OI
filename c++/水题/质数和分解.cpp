#include<bits/stdc++.h>
using namespace std;
long long n,bz[1005],dp[1005];
int hs(int x) {
	if(x<2) {
		return 0;
	}
	for(int i=2; i<=sqrt(x); i++) {
		if(x%i==0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	dp[0]=1;
	for(int i=2; i<=200; i++) {
		if(hs(i)) {
			for(int j=i; j<=200; j++) {
				dp[j]+=dp[j-i];
			}

		}
	}
	
	while(cin>>n){
		cout<<dp[n]<<endl;
	}
}
