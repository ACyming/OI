#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
#include <stack>
#include <string>
using namespace std;
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define LL long long
#define rep1(i,a,b) for (int i = a;i <= b;i++)
#define rep2(i,a,b) for (int i = a;i >= b;i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
typedef pair<int,int> pii;
typedef pair<LL,LL> pll;
void rel(LL &r)
{
    r = 0;
    char t = getchar();
    while (!isdigit(t) && t!='-') t = getchar();
    LL sign = 1;
    if (t == '-')sign = -1;
    while (!isdigit(t)) t = getchar();
    while (isdigit(t)) r = r * 10 + t - '0', t = getchar();
    r = r*sign;
}
void rei(int &r)
{
    r = 0;
    char t = getchar();
    while (!isdigit(t)&&t!='-') t = getchar();
    int sign = 1;
    if (t == '-')sign = -1;
    while (!isdigit(t)) t = getchar();
    while (isdigit(t)) r = r * 10 + t - '0', t = getchar();
    r = r*sign;
}
const int MAXN = 1300;
const int dx[5] = {0,1,-1,0,0};
const int dy[5] = {0,0,0,-1,1};
const double pi = acos(-1.0);
struct abc
{
    int x,y,step;
};
int n,a0,b0,a1,b1,h[MAXN][MAXN];
bool bo[MAXN][MAXN];
queue <abc> dl;
 
int main()
{

    rei(n);
    rep1(i,1,n)
        rep1(j,1,n)
            rei(h[i][j]);
    rei(a0);rei(b0);rei(a1);rei(b1);
    if (h[a0][b0]||h[a1][b1])
        puts("imposiible");
    else
    {
        bool ok = false;
        memset(bo,false,sizeof(bo));
        bo[a0][b0] = true;
        if (bo[a1][b1])
        {
            puts("0");
            return 0;
        }
        abc tt;
        tt.x = a0,tt.y = b0,tt.step = 0;
        dl.push(tt);
        while (!dl.empty())
        {
            int x = dl.front().x,y = dl.front().y,s = dl.front().step;
            dl.pop();
            rep1(i,1,4)
            {
                int tx = x,ty = y;
                while (!h[tx+dx[i]][ty+dy[i]])
                    tx+=dx[i],ty+=dy[i];
                if (bo[tx][ty])
                    continue;
                bo[tx][ty] = true;
                tt.x = tx;tt.y = ty;tt.step=s+1;
                dl.push(tt);
                if (tx==a1 && ty==b1)
                {
                    ok = true;
                    cout << s+1<<endl;
                    break;
                }
            }
            if (ok) 
			{
				break;
			}
        }
        if (!ok)
        {
        	 puts("impossible");
		}
    }
    return 0;
}
