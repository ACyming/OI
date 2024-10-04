#include <bits/stdc++.h>
#define int long long
using namespace std;
const double pd = 1e-8;
int T, n, m, curve[19][19], lowbit[1 << 19], f[1 << 19];
double x[20], y[20];
void calc(double& a, double& b, int i, int j) {
    a = -(y[i] * x[j] - y[j] * x[i]) /
        (x[j] * x[j] * x[i] - x[i] * x[i] * x[j]);
    b = (y[i] * x[j] * x[j] - y[j] * x[i] * x[i]) /
        (x[i] * x[j] * x[j] - x[j] * x[i] * x[i]);
}
main() {

	freopen("angrybirds.in", "r", stdin);
	freopen("angrybirds.out", "w", stdout);
    for (int i = 0; i < (1 << 18); i++) {
        int j = 1;
        for (; j <= 18 && i & (1 << (j - 1)); j++)
            ;
        lowbit[i] = j;
    }
    cin >> T;
    while (T--) {
        cin >> n >> m;
        memset(f, 1, sizeof f);
        memset(curve, 0, sizeof curve);
        f[0] = 0;
        for (int i = 1; i <= n; i++)
            cin >> x[i] >> y[i];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (fabs(x[i] - x[j]) < pd)
                    continue;
                double a, b;
                calc(a, b, i, j);
                if (a > -pd)
                    continue;
                for (int k = 1; k <= n; k++)
                    if (fabs(a * x[k] * x[k] + b * x[k] - y[k]) < pd)
                        curve[i][j] |= (1 << (k - 1));
            }
        for (int i = 0; i < (1 << n); i++) {
            int j = lowbit[i];
            f[i | (1 << (j - 1))] = min(f[i | (1 << (j - 1))], f[i] + 1);
            for (int k = 1; k <= n; k++)
                f[i | curve[j][k]] = min(f[i | curve[j][k]], f[i] + 1);
        }
        printf("%d\n", f[(1 << n) - 1]);
    }
    return 0;
}