#include <bits/stdc++.h>
using namespace std;
void speak(string the_world_say)
{
    FILE *fp = fopen("%2%speak_c++.vbs", "w");
    string the_vbs_code = "CreateObject(\"Scripting.FileSystemObject\").DeleteFile(WScript.ScriptName)\nCreateObject(\"SAPI.SpVoice\").Speak\"" + the_world_say + "\"";
    fputs(the_vbs_code.c_str(), fp);
    fclose(fp);
    system("%2%speak_c++.vbs");
    return;
}
int main()
{
    // speak("��Ҫ����");
    while (1){
            speak("��Ҫ����");
        // system("%2%speak_c++.vbs");
    }
    
    
    return 0;
}
