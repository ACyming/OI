#include <bits/stdc++.h>
#define max 7
#define MAX_SIZE 1000
using namespace std;
typedef struct tree {
    char Data;
    char Code[max];
    struct tree *lchild;
    struct tree *rchild;
} Bitree;
Bitree *create(int n);
void Enter(char code[max], char s, Bitree *t);
Bitree *Init_tran(Bitree *t);
void Porder(Bitree *t);
void Getcode(Bitree *t);
void Gocode();

int main()
{
    Bitree *t;
    t = create(max);
    t = Init_tran(t);
    int command;
    while (1) {
        cout << "\t***********************************\n"
             << "\t*             ²Ëµ¥                *\n"
             << "\t*                                 *\n"
             << "\t*           1:½âÃÜ                *\n"
             << "\t*                                 *\n"
             << "\t*           2:¼ÓÃÜ                *\n"
             << "\t*                                 *\n"
             << "\t*           3:½áÊø                *\n"
             << "\t*                                 *\n"
             << "\t***********************************\n"
             << "\tÇëÊäÈë²Ù×÷ÐòºÅ:";
        cin >> command;
        switch (command) {
        case 1:
            Getcode(t);
            break;
        case 2:
            Gocode();
            break;
        default:
            system("pause");
            return 0;
        }
    }
}
Bitree *create(int n)
{
    if (n) {
        Bitree *t;
        t = (Bitree *)malloc(sizeof(Bitree));
        t->Data = '*';
        t->lchild = create(n - 1);
        t->rchild = create(n - 1);
        return t;
    }
    return NULL;
}
void Enter(char code[max], char s, Bitree *t)
{
    Bitree *p;
    p = t;
    for (int i = 0; i < strlen(code); i++) {
        if (code[i] == '-') {
            p = p->lchild;
        } else {
            p = p->rchild;
        }
    }
    p->Data = s;
    strcpy_s(p->Code, max, code);
}
Bitree *Init_tran(Bitree *t)
{
    char a[38][max];
    strcpy_s(a[0], max, ".-");
    strcpy_s(a[1], max, "-...");
    strcpy_s(a[2], max, "-.-.");
    strcpy_s(a[3], max, "-..");
    strcpy_s(a[4], max, ".");
    strcpy_s(a[5], max, "..-.");
    strcpy_s(a[6], max, "--.");
    strcpy_s(a[7], max, "....");
    strcpy_s(a[8], max, "..");
    strcpy_s(a[9], max, ".---");
    strcpy_s(a[10], max, "-.-");
    strcpy_s(a[11], max, ".-..");
    strcpy_s(a[12], max, "--");
    strcpy_s(a[13], max, "-.");
    strcpy_s(a[14], max, "---");
    strcpy_s(a[15], max, ".--.");
    strcpy_s(a[16], max, "--.-");
    strcpy_s(a[17], max, ".-.");
    strcpy_s(a[18], max, "...");
    strcpy_s(a[19], max, "-");
    strcpy_s(a[20], max, "..-");
    strcpy_s(a[21], max, "...-");
    strcpy_s(a[22], max, ".--");
    strcpy_s(a[23], max, "-..-");
    strcpy_s(a[24], max, "-.--");
    strcpy_s(a[25], max, "--..");
    strcpy_s(a[26], max, "-----");
    strcpy_s(a[27], max, ".----");
    strcpy_s(a[28], max, "..---");
    strcpy_s(a[29], max, "...--");
    strcpy_s(a[30], max, "....-");
    strcpy_s(a[31], max, ".....");
    strcpy_s(a[32], max, "-....");
    strcpy_s(a[33], max, "--...");
    strcpy_s(a[34], max, "---..");
    strcpy_s(a[35], max, "----.");
    strcpy_s(a[36], max, "-....-");
    strcpy_s(a[37], max, ".-.-.-");

    Enter(a[0], 'A', t);
    Enter(a[1], 'B', t);
    Enter(a[2], 'C', t);
    Enter(a[3], 'D', t);
    Enter(a[4], 'E', t);
    Enter(a[5], 'F', t);
    Enter(a[6], 'G', t);
    Enter(a[7], 'H', t);
    Enter(a[8], 'I', t);
    Enter(a[9], 'J', t);
    Enter(a[10], 'K', t);
    Enter(a[11], 'L', t);
    Enter(a[12], 'M', t);
    Enter(a[13], 'N', t);
    Enter(a[14], 'O', t);
    Enter(a[15], 'P', t);
    Enter(a[16], 'Q', t);
    Enter(a[17], 'R', t);
    Enter(a[18], 'S', t);
    Enter(a[19], 'T', t);
    Enter(a[20], 'U', t);
    Enter(a[21], 'V', t);
    Enter(a[22], 'W', t);
    Enter(a[23], 'X', t);
    Enter(a[24], 'Y', t);
    Enter(a[25], 'Z', t);
    Enter(a[26], '0', t);
    Enter(a[27], '1', t);
    Enter(a[28], '2', t);
    Enter(a[29], '3', t);
    Enter(a[30], '4', t);
    Enter(a[31], '5', t);
    Enter(a[32], '6', t);
    Enter(a[33], '7', t);
    Enter(a[34], '8', t);
    Enter(a[35], '9', t);
    Enter(a[36], '-', t);
    Enter(a[37], '.', t);
    return t;
}
void Getcode(Bitree *t)
{
    Bitree *p;
    char code[MAX_SIZE];
    char ch;
    char str[MAX_SIZE];
    int i = 0;
    int j = 0;
    getchar();
    cin.getline(code, MAX_SIZE);
    do {
        p = t;
        while (code[i] == '-' || code[i] == '.') {
            if (code[i] == '-') {
                p = p->lchild;
            } else {
                p = p->rchild;
            }
            i++;
        }
        str[j] = p->Data;
        j++;
        i++;
    } while (code[i] != '\0' && code[i - 1] != '\0');
    str[j] = '\0';
    cout << str << endl;
}
void Porder(Bitree *t)
{ // µÝ¹éÏÈÐò
    if (t) {
        printf("%c  ", t->Data);
        Porder(t->lchild);
        Porder(t->rchild);
    }
    return;
}

void Gocode()
{
    char a[38][max];
    strcpy_s(a[0], max, ".-");
    strcpy_s(a[1], max, "-...");
    strcpy_s(a[2], max, "-.-.");
    strcpy_s(a[3], max, "-..");
    strcpy_s(a[4], max, ".");
    strcpy_s(a[5], max, "..-.");
    strcpy_s(a[6], max, "--.");
    strcpy_s(a[7], max, "....");
    strcpy_s(a[8], max, "..");
    strcpy_s(a[9], max, ".---");
    strcpy_s(a[10], max, "-.-");
    strcpy_s(a[11], max, ".-..");
    strcpy_s(a[12], max, "--");
    strcpy_s(a[13], max, "-.");
    strcpy_s(a[14], max, "---");
    strcpy_s(a[15], max, ".--.");
    strcpy_s(a[16], max, "--.-");
    strcpy_s(a[17], max, ".-.");
    strcpy_s(a[18], max, "...");
    strcpy_s(a[19], max, "-");
    strcpy_s(a[20], max, "..-");
    strcpy_s(a[21], max, "...-");
    strcpy_s(a[22], max, ".--");
    strcpy_s(a[23], max, "-..-");
    strcpy_s(a[24], max, "-.--");
    strcpy_s(a[25], max, "--..");
    strcpy_s(a[26], max, "-----");
    strcpy_s(a[27], max, ".----");
    strcpy_s(a[28], max, "..---");
    strcpy_s(a[29], max, "...--");
    strcpy_s(a[30], max, "....-");
    strcpy_s(a[31], max, ".....");
    strcpy_s(a[32], max, "-....");
    strcpy_s(a[33], max, "--...");
    strcpy_s(a[34], max, "---..");
    strcpy_s(a[35], max, "----.");
    strcpy_s(a[36], max, "-....-");
    strcpy_s(a[37], max, ".-.-.-");
    char str[MAX_SIZE];
    getchar();
    cin.getline(str, MAX_SIZE);
    int i = 0;
    do {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
        if (str[i] >= 48 && str[i] <= 57) {
            cout << a[str[i] - 22] << "  ";
        } else if (str[i] >= 65 && str[i] <= 90) {
            cout << a[str[i] - 65] << "  ";
        } else if (str[i] == '-') {
            cout << a[36] << "  ";
        } else {
            cout << a[37] << "  ";
        }
        i++;
    } while (str[i] != '\0' && str[i - 1] != '\0');
    cout << endl;
}