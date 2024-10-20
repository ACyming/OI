#include <bits/stdc++.h>
using namespace std;
int t, n, ans, sum;
char c;
int main()
{
    freopen("match.in", "r", stdin);
    freopen("match.out", "w", stdout);
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        sum = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> c;
            if (c == '0' || c == '6' || c == '9')
                sum += 4;
            else if (c == '1')
                sum += 0;
            else if (c == '2' || c == '3' || c == '5')
                sum += 3;
            else if (c == '4')
                sum += 2;
            else if (c == '7')
                sum += 1;
            else if (c == '8')
                sum += 5;
        }
        for (int i = n; i >= 1; i--)
        {
            if (sum >= 4)
                if (sum == i * 5)
                    printf("8"), sum -= 5;
                else
                    printf("9"), sum -= 4;
            else
            {
                if (sum > 1 && i != 1)
                    printf("7"), sum -= 1;
                else if (sum >= 1)
                {
                    if (sum == 1)
                        printf("7");
                    if (sum == 2)
                        printf("4");
                    if (sum == 3)
                        printf("5");
                    sum = 0;
                }
                else if (sum == 0)
                    printf("1");
            }
        }
        printf("\n");
    }
}

/*
1  ->   2
4  ->   4
5  ->   5
7  ->   3
8  ->   7
9  ->   6
*/
/*
0 ->  6
2 ->  5
3 ->  5
6 ->  6
*/