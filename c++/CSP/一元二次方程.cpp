#include <bits/stdc++.h>
#define gcd(a, b) __gcd(a, b)
using namespace std;
long long t, m, a, b, c, delta;
int main() {
    cin >> t >> m;
    while (t--) {
        cin >> a >> b >> c;
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "NO" << endl;
        } else if (delta == 0) {
            long long p = -b, q = 2 * a, gg = __gcd(abs(q), abs(p));
            p /= gg;
            q /= gg;
            if (p == 0)
                cout << 0 << endl;
            else
                cout << p << '/' << q << endl;
        } else {
            long long p = -b, q = 2 * a;
            long long sq = (long long)sqrt(delta);
            if (sq * sq == delta) {
                if (q > 0)
                    p += sq;
                else
                    p -= sq;
                long long gg = gcd(abs(q), abs(p));
                p /= gg, q /= gg;
                if (q < 0)
                    q = -q, p = -p;
                if (p == 0)
                    cout << 0 << endl;
                else if (q == 1)
                    cout << p << endl;
                else
                    cout << p << '/' << q << endl;
            } else {
                long long gg = gcd(abs(q), abs(p));
                p /= gg, q /= gg;
                if (q < 0)
                    q = -q, p = -p;
                if (p != 0) {
                    if (q == 1)
                        printf("%lld+", p);
                    else
                        printf("%lld/%lld+", p, q);
                }
                q = abs(2 * a);
                p = 1;
                long long t = 0;
                for (long long r = sq; r >= 1; r--)
                    if (delta % (r * r) == 0) {
                        p *= r;
                        t = delta / (r * r);
                        break;
                    }
                gg = gcd(abs(q), abs(p));
                p /= gg, q /= gg;

                if (q < 0)
                    q = -q, p = -p;
                if (p == 0)
                    cout << 0 << endl;
                else if (p == q)
                    printf("sqrt(%lld)\n", t);
                else if (q == 1)
                    printf("%lld*sqrt(%lld)\n", p, t);
                else if (p == 1)
                    printf("sqrt(%lld)/%lld\n", t, q);
                else
                    printf("%lld*sqrt(%lld)/%lld\n", p, t, q);
            }
        }
    }
    return 0;
}