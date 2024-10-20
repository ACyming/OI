#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n,a[N],b[N],maxx,ans;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = b[i - 1] + a[i];
	}
	for (int i = 4; i <= n; i++) {
		if(maxx<b[i] - b[i-3 - 1]){
			maxx=b[i] - b[i-3 - 1];
			ans=i-3;
		}
		
	}
	cout<<maxx<<endl<<ans;
	return 0;
}
