#include <iostream>
#include <windows.h>
using namespace std;

float sumResistance(float r1, float r2, bool parallel) {
    if (parallel) {
        return (r1 * r2) / (r1 + r2);
    }
    return r1 + r2;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float r1, r2;
    bool parallel;
    cout << "Введіть опір 1:\n";
    cin >> r1;
    cout << "Введіть опір 2:\n";
    cin >> r2;
    cout << "Введіть '1' якщо з'єднання паралельне, '0' якщо послідовне:\n";
    cin >> parallel;
    cout << "Сума опорів: " << sumResistance(r1, r2, parallel);
}
