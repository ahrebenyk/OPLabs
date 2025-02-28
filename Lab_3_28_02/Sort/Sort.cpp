#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    cout << "Введіть розмір масиву:\n";
    int n;
    cin >> n;

    // init array
    cout << "Початковий масив:\n";
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    //insertion sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // print sorted array
    cout << "Відсортований масив:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
