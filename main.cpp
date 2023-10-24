#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleOutputCP(1251);
    const int rows1 = 5;
    const int cols1 = 10;

    int array1[rows1][cols1];

    srand(static_cast<unsigned>(time(nullptr)));

    cout << "Перший масив:" << endl;

    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols1; j++) 
        {
            array1[i][j] = rand() % 51; 
            cout << array1[i][j] << '\t';
        }
        cout << endl;
    }

    const int rows2 = 5;
    const int cols2 = 5;

    int array2[rows2][cols2];

    cout << "Другий масив:" << endl;

    for (int i = 0; i < rows2; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            array2[i][j] = array1[i][2 * j] + array1[i][2 * j + 1];
            cout << array2[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}
