#include <bits/stdc++.h>
#define int __int128 
int N, M, T;
int m[120], t[120];
int f[1020][1020], w[120];
__int128 read()
{
	__int128 x = 0;
	char c = getchar();
	while (c < 48 || c > 57)
		c = getchar();
	while (c > 47 && c < 58)
		x = (x << 1) + (x << 3) + c - 48, c = getchar();
	return x;
}
void write(__int128 x)
{
	if (x > 9)
		write(x / 10);
	putchar(x % 10 + 48);
}

main() {
    N=read();
    M=read();
    T=read();
    for (int i = 1; i <= N; i++) {
        m[i]=read();
        t[i]=read();
        w[i]=read();
    }
    for (int i = 1; i <= N; i++) {
        for (int j = M; j >= m[i]; j--) {
            for (int k = T; k >= t[i]; k--) {
                f[j][k] = std::max(f[j][k], f[j - m[i]][k - t[i]] + w[i]);
//                write(f[j][k]);
//				std::cout << "\n"; 
            }
        }
    }
    write(f[M][T]);
    return 0;
}
