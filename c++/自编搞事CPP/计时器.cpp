#include <bits/stdc++.h>
#include <windows.h>
#define keydown(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
int s;
int main() {
	for (int i = 1; i <= 1000; i++) {
		if (keydown(32)) {
			return 0;
		}
		cout << "\r" << s << ":";
		if (i <= 9) printf("00%d", i);
		else if (i <= 99) printf("0%d", i);
		else if (i <= 999) printf("%d", i);
		else cout << i;
		if (i >= 1000)
			s++, i = 1;
	}
	return 0;
}
