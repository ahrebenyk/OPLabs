#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char str[100];
    cout << "Введіть строку:\n";
    cin.getline(str, 100);
    int size = strlen(str);
    char temp = str[0];
    str[0] = str[size - 1];
    str[size - 1] = temp;
    cout << "Результат: " << str << endl;
}
