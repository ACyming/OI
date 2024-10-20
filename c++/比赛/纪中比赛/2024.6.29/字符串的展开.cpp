#include <bits/stdc++.h>
#define pd (s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= s[i - 1] && s[i + 1] <= 'z')
#define pd2 (s[i - 1] >= '0' && s[i - 1] <= '9' && s[i + 1] >= s[i - 1] && s[i + 1] <= '9')
using namespace std;
int p1, p2, p3;
int len;
string s;
int main()
{

	cin >> p1 >> p2 >> p3;
	cin >> s;
	len = s.size();
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '-')
		{
			if (s[i - 1] == s[i + 1] || s[i - 1] > s[i + 1])
				continue;
			if ((pd) || (pd2))
			{
				string in = "";
				for (char j = s[i - 1] + 1; j <= s[i + 1] - 1; j++)
				{
					for (int k = 0; k < p2; k++)
					{
						if (p1 == 1)
							in = in + j;
						else if (p1 == 2 && pd2)
							in = in + j;
						else if (p1 == 2)
							in = in + char(j - 32);
						else if (p1 == 3)
							in = in + '*';
					}
				}
				s[i] = 0;
				if (p3 == 2)
					reverse(in.begin(), in.end());
				s.insert(i, in);
			}
		}
	}
	for (int i = 0; i < s.size(); i++)
		if (s[i] != 0)
			cout << s[i];
	return 0;
}