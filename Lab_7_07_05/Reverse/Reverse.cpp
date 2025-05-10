#include <iostream>
#include <windows.h>
using namespace std;

void reverse(int number) {
    if (number == 0) {
        return;
    }
    cout << number % 10;
    reverse(number / 10);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int number;
    cout << "Введіть число:\n";
    cin >> number;

    reverse(number);
}
