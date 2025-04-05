#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string str;
    cout << "Введіть строку:\n";
    getline(cin, str);

    //здвигаємо символ на 3
    for (int i = 0; i < str.length(); i++) {
        str[i] = str[i] + 3;
    }
    cout << "Результат: " << str << endl;
}
