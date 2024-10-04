#include <Windows.h>
#include <stdio.h>
int main() {
	SYSTEMTIME time;

	while (1){
		GetLocalTime(&time);
//		system("CLS");
		printf("现在时间：%02d:%02d:%02d      距离下课：%02d分%02d\r", time.wHour, time.wMinute, time.wSecond,60-time.wMinute,60-time.wSecond);
	}
		
}

