#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

double median(int a, int b, int c) {
    return 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
}

double radius(int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    return (a * b * c) / (4.0 * area);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    cout << "Введіть сторони трикутника a, b, c:\n";
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b < c || a + c < b || b + c < a) {
        cout << "Введені числа не є сторонами трикутника";
        return 0;
    }

    double m = median(a, b, c);
    cout << "Медіана = " << m << endl;
    double r = radius(a, b, c);
    cout << "Радіус описаного кола = " << r << endl;
}
