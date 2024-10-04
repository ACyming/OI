#include <Windows.h>
#include <bits/stdc++.h>

int main()
{
    // 启动应用
    const char *appPath = "C:\\Program Files\\Genshin Impact Cloud Game\\Genshin Impact Cloud Game.exe"; // 自行修改位置
    STARTUPINFOA si = {sizeof(STARTUPINFOA)};
    PROCESS_INFORMATION pi;

    BOOL result = CreateProcessA(
        NULL,           // No module name (use command line)
        (LPSTR)appPath, // Command line
        NULL,           // Process handle not inheritable
        NULL,           // Thread handle not inheritable
        FALSE,          // Set handle inheritance to FALSE
        0,              // No creation flags
        NULL,           // Use parent's environment block
        NULL,           // Use parent's starting directory
        &si,            // Pointer to STARTUPINFO structure
        &pi             // Pointer to PROCESS_INFORMATION structure
    );

    if (result == 0) {
        std::cerr << "Failed to start process. Error: " << GetLastError() << std::endl;
        return 1;
    }

    // 等待2秒，取决于电脑执行能力
    Sleep(2000);

    // 模拟鼠标在屏幕中央单击
    // 获取屏幕分辨率
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // 设置鼠标位置
    SetCursorPos(screenWidth / 2, screenHeight * 3 / 5);

    // 执行鼠标单击
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    // 给应用程序一些反应时间
    Sleep(1000);

    // 关闭应用程序
    TerminateProcess(pi.hProcess, 0);
    // 关闭进程和线程句柄
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}