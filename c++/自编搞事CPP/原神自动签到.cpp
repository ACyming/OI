#include <Windows.h>
#include <bits/stdc++.h>

int main()
{
    // ����Ӧ��
    const char *appPath = "C:\\Program Files\\Genshin Impact Cloud Game\\Genshin Impact Cloud Game.exe"; // �����޸�λ��
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

    // �ȴ�2�룬ȡ���ڵ���ִ������
    Sleep(2000);

    // ģ���������Ļ���뵥��
    // ��ȡ��Ļ�ֱ���
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // �������λ��
    SetCursorPos(screenWidth / 2, screenHeight * 3 / 5);

    // ִ����굥��
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    // ��Ӧ�ó���һЩ��Ӧʱ��
    Sleep(1000);

    // �ر�Ӧ�ó���
    TerminateProcess(pi.hProcess, 0);
    // �رս��̺��߳̾��
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}