#include <iostream>
#include <windows.h>
using namespace std;

int commonDigits(int a, int b) {
    bool digitsA[10] = {false};
    bool digitsB[10] = {false};

    while (a > 0) {
        digitsA[a % 10] = true;
        a /= 10;
    }
    while (b > 0) {
        digitsB[b % 10] = true;
        b /= 10;
    }
    int result = 0;
    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (digitsA[i] && digitsB[i]) {
            result = result * 10 + i;
            found = true;
        }
    }
    if (!found) {
        return -1;
    }
    return result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    FILE* inputFile = fopen("Lab_8_09_05/input.txt", "r");
    int a, b, c;
    fscanf(inputFile, "%d %d %d", &a, &b, &c);
    fclose(inputFile);

    FILE* outputFile = fopen("Lab_8_09_05/output.txt", "w");
    int commonAB = commonDigits(a, b);
    int commonBC = commonDigits(b, c);
    fprintf(outputFile, "%d", commonDigits(commonAB, commonBC));
    fclose(outputFile);
}
