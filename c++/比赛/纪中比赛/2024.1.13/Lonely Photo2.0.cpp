#include <bits/stdc++.h>
using namespace std;
long long int len, a[500020], n = 1, ans;
char s[500020];
int main() {
	freopen("a.in", "r", stdin);
	freopen("a.out", "w", stdout);
	
	cin >> len >> s;
	for (long long i = 1; i <= 500020; i++)
		a[i] = 1;
	for (long long int i = 1; i < len; i++) {
		if (s[i] == s[i - 1]) {
			a[n]++;
		} else {
			n++;
		}
	}
	if (n == 1 || n == 2) {
		cout << 0;
		return 0;
	}
	ans = a[2] - 1 + a[n - 1] - 1;
	for (long long int i = 2; i <= n - 1; i++) {
		if (a[i] == 1) {
			ans += (a[i - 1] + 1) * (a[i + 1] + 1) - 3;
		} else {
			ans += a[i - 1] - 1 + a[i + 1] - 1;
		}
	}
	cout << ans;
	return 0;
}
//正解 100分
/*
#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int ans;
int G;
int H;
int main() {
freopen("a.in", "r", stdin);
freopen("a.out", "w", stdout);
cin >> n >> s;
for (int i = 0; i < n; i++) {
G = H = 0;
for (int j = i; j < n; j++) {
if (s[j] == 'G')
G++;
else
H++;
if (G + H >= 3 && (G == 1 || H == 1))
ans++;
}
}
cout << ans;
}
*/
//暴力90分

