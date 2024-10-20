#include <bits/stdc++.h>
int N, M, T;
int m[120], t[120];
int f[220][220];
int main() {
    std::cin >> N >> M >> T;
    for (int i = 1; i <= N; i++) {
        std::cin >> m[i] >> t[i];
    }
    for (int i = 1; i <= N; i++) {
        for (int j = M; j >= m[i]; j--) {
            for (int k = T; k >= t[i]; k--) {
                f[j][k] = std::max(f[j][k], f[j - m[i]][k - t[i]] + 1);
            }
        }
    }
    std::cout << f[M][T];
    return 0;
}