#include <iostream>
using namespace std;
int d[7] = {0, 1, 2, 3, 5, 10, 20}, ans = 0, a[1005], sum = 0, f[1005];
int main() {
	for (int i = 1; i <= 6; i++) {
		cin >> a[i];
		sum += a[i] * d[i];
	}
	f[0] = 1;
	for (int i = 1; i <= 6; i++) {
		for (int j = sum; j >= 1; j--) {
			for (int k = 0; k <= a[i]; k++) {
				if (j - k * d[i] < 0) {
					break;
				}
				if (f[j - k * d[i]] == 1) {
					f[j] = 1;
				}
			}

		}
	}
	for (int i = 1; i <= sum; i++) {
		if (f[i] == 1) {
			ans++;
		}
	}
	cout << "Total=" << ans;
	return 0;
}
