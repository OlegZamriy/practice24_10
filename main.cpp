#include <iostream>
#include <climits>
#include <ctime> 
#include <cstdlib> 
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    int numRows, numCols;
    std::cout << "������ ������� �����: ";
    std::cin >> numRows;
    std::cout << "������ ������� ��������: ";
    std::cin >> numCols;

    int array[10][10];

    if (numRows > 10 || numCols > 10)
    {
        std::cout << "���������� ������������ ����� ������ (10x10)." << std::endl;
        return 1;
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            array[i][j] = std::rand() % 100;
        }
    }

    int total_sum = 0;
    int num_elements = numRows * numCols;
    int min_element = INT_MAX;
    int max_element = INT_MIN;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            total_sum += array[i][j];
            if (array[i][j] < min_element)
            {
                min_element = array[i][j];
            }
            if (array[i][j] > max_element)
            {
                max_element = array[i][j];
            }
        }
    }

    double average = static_cast<double>(total_sum) / num_elements;

    std::cout << "������������ �����:" << std::endl;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "���� ��� ��������: " << total_sum << std::endl;
    std::cout << "������ �����������: " << average << std::endl;
    std::cout << "̳�������� �������: " << min_element << std::endl;
    std::cout << "������������ �������: " << max_element << std::endl;

    return 0;
}
