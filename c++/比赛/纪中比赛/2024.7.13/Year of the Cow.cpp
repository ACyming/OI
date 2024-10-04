
#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
string yearr[20] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
map<string, int> year;
map<string, string> yearan;
main()
{

    cin >> n;
    year["Bessie"] = 114514;
    yearan["Bessie"] = "Ox";
    for (int i = 1; i <= n; i++)
    {
        string name1, zw, qh, anm, name2;
        cin >> name1 >> zw >> zw >> qh >> anm >> zw >> zw >> name2;
        yearan[name1] = anm;
        year[name1] = year[name2];
        if (qh == "previous")
        {
            int k;
            for (int i = 0; i <= 11; i++)
                if (yearr[i] == yearan[name2])
                    k = i;
            while (1)
            {
                k--;
                if (k == -1)
                    k = 11;
                year[name1]--;
                if (anm == yearr[k])
                    break;
            }
        }
        if (qh == "next")
        {
            int k;
            for (int i = 0; i <= 11; i++)
                if (yearr[i] == yearan[name2])
                    k = i;
            while (1)
            {
                k++;
                if (k == 12)
                    k = 0;
                year[name1]++;
                if (anm == yearr[k])
                    break;
            }
        }
    }
    cout << abs(year["Bessie"] - year["Elsie"]) << endl;
    return 0;
}