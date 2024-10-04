#include <bits/stdc++.h>
using namespace std;
int a[7], g[7] = {0, 1, 2, 3, 5, 10, 20};
int ans;
bool bz[99999];
int main() {
	for (int i = 1; i <= 6; i++)
		cin >> a[i];
	for (int a1 = 0; a1 <= a[1]; a1++)
		for (int a2 = 0; a2 <= a[2]; a2++)
			for (int a3 = 0; a3 <= a[3]; a3++)
				for (int a4 = 0; a4 <= a[4]; a4++)
					for (int a5 = 0; a5 <= a[5]; a5++)
						for (int a6 = 0; a6 <= a[6]; a6++)
							if (!bz[a1 * g[1] + a2 * g[2] + a3 * g[3] + a4 * g[4] + a5 * g[5] + a6 * g[6]])
								bz[a1 * g[1] + a2 * g[2] + a3 * g[3] + a4 * g[4] + a5 * g[5] + a6 * g[6]] = 1, ans++;
	cout << "Total=" << ans - 1;
	return 0;
}
