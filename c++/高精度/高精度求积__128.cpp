#include <bits/stdc++.h>
using namespace std;
__int128 a, b, c;
inline unsigned read()
{
    unsigned x = 0;
    char c = getchar();
    while (c < '0' || c > '9')
    {
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        x = x * 10 + (c - '0');
        c = getchar();
    }
    return x;
}
template<typename T>
inline void writeT(T x){
    if(x<0) putchar('-'),x=-x;
    if(x>9) writeT(x/10);
    putchar(x%10+'0');return;
}
int main()
{
    a = read();
    b = read();
    c = a * b;
    writeT(c);
    return 0;
}