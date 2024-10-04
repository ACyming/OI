#include <stdio.h>
long long f1, f2, f3;
long long n, m;
long long sum;
main()
{
    scanf("%d%d", &n, &m);
    f1 = f2 = 1;
    for (register int i = 3; i <= m; i++) {
        f3 = (f1 % 10000 + f2 % 10000) % 10000;
        if (i >= n)
            sum += f3 % 10000;
        f1 = f2 % 10000;
        f2 = f3 % 10000;
    }
    printf("%d", sum % 10000);
    return 0;
}