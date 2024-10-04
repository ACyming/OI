#include <bits/stdc++.h>
using namespace std;
long long a, b, x, y;
long long sbjxr(register long long a,register long long b, register long long& x, register long long& y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    register long long d = sbjxr(b, a % b, x, y);
    register long long yy = y;
    y = (x - (a / b) * y);
    x = yy;
    return d;
}
int main() {
    scanf("%lld%lld", &a, &b);
    register long long ans = sbjxr(a, b, x, y);
	printf("%lld",(x + b) % b);
    return 0;
}