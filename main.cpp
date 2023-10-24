#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    const int rows = 3;
    const int cols = 3;

    int array[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = n;

            if (j > 0)
            {
                array[i][j] = array[i][j - 1] + 1;
            }
        }
    }

    cout << "Creations array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}