#include <bitset>
#include <iostream>
#define popcount(x) bitset<64>(x).count()
using namespace std;
pair<unsigned long long, unsigned long long> findPair(int a, int b, unsigned long long C)
{
    unsigned long long X = 0; // ��ʼ��X
    unsigned long long Y = 0; // ��ʼ��Y

    for (int i = 63; i >= 0; --i)
    {
        if (a >= popcount(X | (1ULL << i)))
        {
            X |= 1ULL << i;
            a -= popcount(X);
        }
        unsigned long long YCandidate = Y | ((C ^ X) & (1ULL << i));
        if (b >= popcount(YCandidate))
        {
            Y = YCandidate;
            b -= popcount(YCandidate) - popcount(Y); // ����b��ֵ
        }

        if (a == 0 && b == 0)
        {
            break;
        }
    }

    if (popcount(X) == a && popcount(Y) == b && X ^ Y == C)
    {
        return {X, Y}; // �����ҵ��Ľ�
    }
    else
    {
        return {-1, -1}; // û���ҵ��⣬����(-1, -1)
    }
}

int main()
{
    int a, b;
    unsigned long long C;
    cin >> a;
    cin >> b;
    cin >> C;

    pair<unsigned long long, unsigned long long> result = findPair(a, b, C);
    if (result.first != -1 && result.second != -1)
    {
        cout << result.first << ", " << result.second << ")" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}