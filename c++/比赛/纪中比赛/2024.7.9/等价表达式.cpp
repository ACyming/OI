#include <bits/stdc++.h>
using namespace std;
string s, ss;
long long n, cnt;
long long a[1000020], ans[1000020];
const int MOD = 1e9 + 7;
stack<char> za;
long long qpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
void hz(string x)
{
    for (long long i = 0; i < x.size(); i++)
    {
        if (x[i] == 'a')
            a[++cnt] = 134;
        else if (x[i] >= '0' && x[i] <= '9')
        {
            long long num = 0, j = i;
            while (x[j] >= '0' && x[j] <= '9')
            {
                num *= 10;
                num += x[j] - '0';
                j++;
            }
            i = j - 1;
            a[++cnt] = num;
            continue;
        }
        else if (x[i] == '(')
            za.push(x[i]);
        else if (x[i] == '+' || x[i] == '-')
        {
            while (!za.empty() && za.top() != '(')
            {
                a[++cnt] = -(za.top());
                za.pop();
            }
            za.push(x[i]);
        }
        else if (x[i] == '^')
        {
            while (!za.empty() && za.top() == '^' && za.top() != '(')
            {
                a[++cnt] = -(za.top());
                za.pop();
            }
            za.push(x[i]);
        }
        else if (x[i] == '*')
        {
            while (!za.empty() && za.top() != '+' && za.top() != '-' && za.top() != '(')
            {
                a[++cnt] = -(za.top());
                za.pop();
            }
            za.push(x[i]);
        }
        else if (x[i] == ')')
        {
            while (!za.empty() && za.top() != '(')
            {
                a[++cnt] = -(za.top());
                za.pop(); 
            } 
            if(za.empty()) continue;
            za.pop();
        }
    }
    while (!za.empty())
    {
        if (za.top() == '+' || za.top() == '-' || za.top() == '^' || za.top() == '*')
            a[++cnt] = -(za.top());
        else
            a[++cnt] = za.top();
        za.pop();
    }
}
stack<long long> zs;
long long sum()
{
    for (long long i = 1; i <= cnt; i++)
    {
        if (a[i] > 0)
            zs.push(a[i]);
        else
        {
            long long x = zs.top();
            zs.pop();
            long long y = zs.top();
            zs.pop();
            if (-a[i] == '+') zs.push((y + x) % MOD);
            if (-a[i] == '-') zs.push((y - x) % MOD);
            if (-a[i] == '*') zs.push((y * x) % MOD);
            if (-a[i] == '^'){
            	if(y != 0 && x != 0)
            	zs.push(qpow(y, x)% MOD) ;
            	else if(y == 0) zs.push(0);
            	else zs.push(1);
			} 
        }
    }
    return zs.top();
}
signed main()
{
#ifdef ONLINE_JUDGE
    freopen("equal.in", "r", stdin);
    freopen("equal.out", "w", stdout);
#endif
    char c;
    c = getchar();
    while (c == '\n' || c == '\r')
        c = getchar();
    while (c != '\n' && c != '\r')
    {
        s = s + c;
        c = getchar();
    }
    hz(s);
    ans[0] = sum();
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        ss = "";
        c = getchar();
        while (c == '\n' || c == '\r')
            c = getchar();
        while (c != '\n' && c != '\r')
        {
            ss = ss + c;
            c = getchar();
        }
        cnt = 0;
        hz(ss);
        ans[i] = sum();
    }
    for (long long i = 1; i <= n; i++)
        if (ans[0] == ans[i])
            cout << char(i + 'A' - 1);
    return 0;
}