#include <iostream>
using namespace std;

int main() {
    const int rows = 4;
    const int cols = 4;

    int array[rows][cols] = {
        {5, 7, 3, 9},
        {10, 4, 6, 2},
        {11, 4, 8, 3},
        {2, 7, 8, 10},
    };

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += array[i][j];
            cout << array[i][j] << '\t';
        }
        cout << "|  " << rowSum << endl;
    }

    for (int j = 0; j < cols; j++) {
        cout << "$$$$$$$$$$";
    }
    cout << endl;

    int totalSum = 0;
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += array[i][j];
        }
        cout << colSum << '\t';
        totalSum += colSum;
    }
    cout << "|  " << totalSum << endl;

    return 0;
}

