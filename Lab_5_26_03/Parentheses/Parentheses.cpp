#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string str;
    cout << "Введіть строку:\n";
    getline(cin, str);

    int braceCounter = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            braceCounter++;
        } else if (str[i] == ')') {
            braceCounter--;
        }
        if (braceCounter < 0) {
            cout << "Неправильно";
            return 0;
        }
    }

    if (braceCounter == 0) {
        cout << "Правильно";
    } else {
        cout << "Неправильно";
    }
}
