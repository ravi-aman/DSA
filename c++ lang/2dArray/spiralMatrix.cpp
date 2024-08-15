#include <iostream>
using namespace std;

void display(const int matrix[][4], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}



int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    display(matrix, 4, 4);

    int minRow = 0;
    int maxRow = 3;
    int minCol = 0;
    int maxCol = 3;

    cout << "Spiral Print:" << endl;
    while (minRow <= maxRow && minCol <= maxCol)
    {
        // right
        for (int j = minCol; j <= maxCol; j++)
        {
            cout << matrix[minRow][j] << " ";
        }
        minRow++;
        if (minRow > maxRow || minCol > maxCol)
            break;
        // down
        for (int i = minRow; i <= maxRow; i++)
        {
            cout << matrix[i][maxCol] << " ";
        }
        maxCol--;
        if (minRow > maxRow || minCol > maxCol)
            break;
        // left
        for (int j = maxCol; j >= minCol; j--)
        {
            cout << matrix[maxRow][j] << " ";
        }
        maxRow--;
        if (minRow > maxRow || minCol > maxCol)
            break;

        //up
        for (int i = maxRow; i >=minRow; i--)
        {
            cout << matrix[i][minCol] << " ";
        }
        minCol++;
    }
    cout << endl;

    return 0;
}
