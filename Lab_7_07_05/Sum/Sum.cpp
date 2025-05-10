#include <iostream>
#include <windows.h>
using namespace std;

void sum(int count, int sum) {
    int n;
    cout << "Введіть число:\n";
    cin >> n;

    if (n == 0) {
        cout << "Кількість чисел: " << count << endl;
        cout << "Сума чисел: " << sum << endl;
        cout << "Середнє значення: " << (double) sum / count << endl;
        return;
    }

    sum(count + 1, sum + n);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    sum(0, 0);
}
