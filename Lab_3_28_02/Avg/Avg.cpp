#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    cout << "Введіть розмір таблиці:\n";
    int n;
    cin >> n;

    //init array
    cout << "Таблиця:\n";
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
    }

    float avg = (float) sum / (n * n);
    cout << "Середнє арифметичне = " << avg << endl;
}
