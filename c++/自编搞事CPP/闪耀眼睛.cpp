#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;
HWND hwnd = GetForegroundWindow();
void big() {
	ShowWindow(hwnd, SW_MAXIMIZE);
}

int main() {
	big();
	while (1) {
		big();
		system("color 17");
		system("color 40");
		system("color 94");
		system("color 88");
		system("color 24");
		system("color 55");
		system("color 17");
		system("color 11");
		system("color 52");
		system("color 76");
	}
	return 0;
}

