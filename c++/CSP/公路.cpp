#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 1e5 + 10;
int n, d;
int v[N], a[N], num, ans, mm[N];
main() {
	memset(mm, 0x3f, sizeof mm);
	cin >> n >> d;
	for(int i = 1; i < n; i++) 
		cin >> v[i];
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		mm[i] = min(mm[i - 1], a[i]);
	}
	int now = 1, len = 0;
	while(now != n) {
		if(len < v[now]) {
			ans += ceil((v[now] - len) * 1.0 / d) * mm[now];
			len += ceil((v[now] - len) * 1.0 / d) * d;
		}
		len -= v[now];
        now++;
	}
	cout << ans;	
	return 0;
}