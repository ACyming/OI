#include <bits/stdc++.h>
#include <windows.h>
int a, b;
int g[9999], c;
void test() {
	int ret = rand () % (b - a) + a;;
	std::cout << ret;
	g[++c] = ret;
}

int main() {
	srand((unsigned int)time(NULL));
	std::cout << "输入起始点和结束点";
	std::cin >> a >> b;
	int num = rand() % 5 + 5;
	for (int i = 1; i <= num; i++) {
		system("CLS");
		test();
		Sleep(1500);
	}
	freopen("中奖名单.txt", "w", stdout);
	for (int i = 1; i <= c; i++) {
		std::cout << g[i];
		std::cout << "\n";
	}
}


