#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

string toBinary(int n) {
    if (n == 0) return "0";

    string binary;
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введіть число:\n";
    int n;
    cin >> n;
    cout << "Двійкове значення: " << toBinary(n);
}
