#include<iostream>
#include<string>
using namespace std;
int a[1520], b[1520], c[1520];
string s1;
string s2;
int main() {
	cin >> s1;
	cin >> s2;
	for (int i = 0; i < s1.size(); i ++)
	{
		a[s1.size()-1 - i] = s1[i] - '0';
	}
	for (int i = 0; i < s2.size(); i ++)
	{
		b[s2.size()-1 - i] = s2[i] - '0';
	}
	int ans = max(s1.size(), s2.size());
	for (int i = 0; i < ans; i ++) {
		c[i] += a[i] + b[i];
		c[i+1] = c[i] / 10;
		c[i] %= 10;
	}
	ans++;
	if (c[ans-1] == 0 && ans > 1)
		ans -= 1;
	for (int i = 0; i < ans; i ++)
		cout << c[ans-1-i];
	return 0;
}
