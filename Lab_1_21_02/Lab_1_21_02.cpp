#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int candidatesCount = 5;
    int cityCount = 6;
    int arr[cityCount][candidatesCount];
    srand(time(0));

    cout << "Результати голосування:\n";
    cout << "\tK1\tK2\tK3\tK4\tK5\n"; ;
    for (int i = 0; i < cityCount; i++) {
        cout << "НП" << i + 1 << "\t";
        for (int j = 0; j < candidatesCount; j++) {
            arr[i][j] = std::rand() % 950;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int votersCount;
    cout << "Введіть кількість опитаних:\n";
    cin >> votersCount;

    int result[cityCount];
    int resultCount = 0;

    for (int i = 0; i < cityCount; i++) {
        int cityVotersCount = 0;
        for (int j = 0; j < candidatesCount; j++) {
            cityVotersCount += arr[i][j];
        }
        // cout << "Кількість опитаних в Місті " << i + 1 << " : " << cityVotersCount << endl;
        if (cityVotersCount >= votersCount) {
            result[resultCount] = i;
            resultCount++;
        }
    }

    cout << "Кількість опитаних більша " << votersCount << " в таких населених пунктах:\n";
    for (int i = 0; i < resultCount; i++) {
        cout << result[i] + 1 << " ";
    }
}
