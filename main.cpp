#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime> 
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleOutputCP(1251);
    const int rows = 6;
    const int cols = 6;

    vector<vector<int>> array(rows, vector<int>(cols));

    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            array[i][j] = rand() % 10; 
        }
    }

    cout << "���������� �����:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int shifts, direction;

    cout << "������ ������� �����: ";
    cin >> shifts;

    cout << "������ �������� ����� (1 - ������, 2 - ��������, 3 - �����, 4 - ����): ";
    cin >> direction;

    for (int k = 0; k < shifts; k++) 
    {
        vector<vector<int>> temp(rows, vector<int>(cols));
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                int new_i, new_j;
                if (direction == 1) 
                {
                    new_i = i;
                    new_j = (j + 1) % cols;
                }
                else if (direction == 2) 
                {
                    new_i = i;
                    new_j = (j + cols - 1) % cols;
                }
                else if (direction == 3) 
                {
                    new_i = (i + 1) % rows;
                    new_j = j;
                }
                else if (direction == 4) 
                {
                    new_i = (i + rows - 1) % rows;
                    new_j = j;
                }
                temp[new_i][new_j] = array[i][j];
            }
        }
        array = temp;
    }

    cout << "����� ���� �����:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

