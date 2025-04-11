#include <iostream>
#include <windows.h>
using namespace std;

int negSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    cout << "Введіть розмір масиву:\n";
    int n;
    cin >> n;

    //init array
    cout << "Сгенерований масив:\n";
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 - 50;
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = negSum(arr, n);
    cout << "Сума негативних елементів масиву = " << sum << endl;
}
