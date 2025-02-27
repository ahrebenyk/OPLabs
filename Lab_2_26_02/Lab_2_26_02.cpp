#include <iostream>
using namespace std;

int main() {
    int size = 9;
    int arr[size][size];
    int n = 1, m = 81;

    for (int k = 0; k <= 8; k++) {
        for (int i = 8, j = k; i >= 8 - k; i--, j--) {
            arr[i][j] = n;
            arr[8-i][8-j] = m;
            n++;
            m--;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
