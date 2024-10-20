#include <bits/stdc++.h>
#define IN __int128
#define int long long
using namespace std;
IN f[1000020];
int n, m;
int sum;
main() {
	cin >> n >> m;
	f[1] = f[2] = 1;
	for (int i = 3; i <= m; i++)
		f[i] = (f[i - 1] + f[i - 2])/*,cout<<f[i]<<endl*/;
	for (int i = n; i <= m; i++)
		sum += f[i];
	cout << sum % 10000;
	return 0;
}
