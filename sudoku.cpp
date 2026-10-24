#include <iostream>
using namespace std;

int sudoku[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
};

// Check whether number can be placed
bool isSafe(int row, int col, int num)
{
    // Check row
    for (int i = 0; i < 9; i++)
        if (sudoku[row][i] == num)
            return false;

    // Check column
    for (int i = 0; i < 9; i++)
        if (sudoku[i][col] == num)
            return false;

    // Check 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (sudoku[startRow + i][startCol + j] == num)
                return false;

    return true;
}

// Solve Sudoku using backtracking
bool solveSudoku()
{
    int row = -1, col = -1;
    bool empty = false;

    // Find an empty cell
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (sudoku[i][j] == 0)
            {
                row = i;
                col = j;
                empty = true;
                break;
            }
        }

        if (empty)
            break;
    }

    // No empty cell means puzzle is solved
    if (!empty)
        return true;

    // Try numbers 1 to 9
    for (int num = 1; num <= 9; num++)
    {
        if (isSafe(row, col, num))
        {
            sudoku[row][col] = num;

            if (solveSudoku())
                return true;

            // Backtrack
            sudoku[row][col] = 0;
        }
    }

    return false;
}

// Display Sudoku
void display()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            cout << sudoku[i][j] << " ";

        cout << endl;
    }
}

int main()
{
    cout << "Original Sudoku:\n";
    display();

    if (solveSudoku())
    {
        cout << "\nSolved Sudoku:\n";
        display();
    }
    else
    {
        cout << "\nNo solution exists!";
    }

    return 0;
}