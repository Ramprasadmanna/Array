#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int row, column, i, j;
    cout << "Enter Row And Column : ";
    cin >> row >> column;

    // Creating 2D Array
    int **array = new int *[row];
    for (i = 0; i < row; i++)
    {
        array[i] = new int[column];
    }

    // Taking Input

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cin >> array[i][j];
        }
    }

    cout << endl;

    // Printing Output
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    // Releasing Memory
    for (i = 0; i < row; i++)
    {
        delete[] array[i];
    }

    delete[] array;

    return 0;
}