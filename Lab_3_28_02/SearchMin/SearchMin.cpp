#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    int ROWS = 2, COLUMNS = 6;
    float arr[ROWS][COLUMNS];

    //init array
    cout << "Таблиця елементів:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            arr[i][j] = rand() % 100 + 0.1f * (rand() % 10);
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    float min = arr[0][0], minRowIndex = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                minRowIndex = i;
            }
        }
    }

    cout << "Мінімальний елемент: " << min << " в рядку: " << minRowIndex + 1 << endl;
}
