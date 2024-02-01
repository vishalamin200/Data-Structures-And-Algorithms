// Sudoku solver

#include <iostream>
using namespace std;

bool isSafe(int mat[][9], int row, int col, int value)
{
    /* Check whether the given number can be placed in that cell or not */

    for (int i = 0; i < 9; i++)
    {
        // row and column check
        if (mat[i][col] == value || mat[row][i] == value)
        {
            return false;
        }

        // check number in square of 3X3
        if (mat[(row / 3) * 3 + i / 3][(col / 3) * 3 + i % 3] == value)
        {
            return false;
        }
    }
    return true;
}

bool solveSudoku(int mat[][9])
{

    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (mat[row][col] != 0)
            {
                continue;
            }
            for (int value = 1; value <= 9; value++)
            {
                if (isSafe(mat, row, col, value))
                {
                    mat[row][col] = value;

                    bool result = solveSudoku(mat);
                    if (result)
                    {
                        return true;
                    }
                    else
                    {
                        // Backtrack
                        mat[row][col] = 0;
                    }
                }
            }
            return false;
        }
    }
    return true;
}

int main()
{
    // make a sudoku

    int mat[9][9] = {
        {9, 0, 0, 0, 0, 0, 0, 5, 0},
        {0, 0, 0, 5, 0, 6, 1, 0, 0},
        {0, 0, 0, 7, 0, 0, 0, 0, 0},
        {0, 7, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 9, 0, 4, 0, 0},
        {0, 6, 3, 0, 0, 0, 0, 0, 0},
        {5, 0, 0, 0, 2, 0, 0, 0, 0},
        {0, 0, 0, 3, 0, 0, 0, 0, 6},
        {0, 1, 0, 0, 0, 0, 0, 0, 7},
    };

    bool solved = solveSudoku(mat);
    if (solved == true)
        for (int row = 0; row < 9; row++)
        {
            for (int col = 0; col < 9; col++)
            {
                cout << mat[row][col] << " ";
            }
            cout << endl;
        }

    return 0;
}