#include <iostream>
#include <vector>
using namespace std;

// Spiral matrix

void SpiralMatrix(vector<vector<int>> arr)
{
    int rows = arr.size();
    int cols = arr[0].size();

    int startRow = 0, startCol = 0;
    int endRow = rows - 1, endCol = cols - 1;

    while (startRow <= endRow && startCol <= endCol)
    {
        // Top row
        for (int i = startCol; i <= endCol; i++)
        {
            cout << arr[startRow][i] << " ";
        }

        // Right column
        for (int i = startRow + 1; i <= endRow; i++)
        {
            cout << arr[i][endCol] << " ";
        }

        // Bottom row
        if (startRow != endRow)
        {
            for (int i = endCol - 1; i >= startCol; i--)
            {
                cout << arr[endRow][i] << " ";
            }
        }

        // Left column
        if (startCol != endCol)
        {
            for (int i = endRow - 1; i > startRow; i--)
            {
                cout << arr[i][startCol] << " ";
            }
        }

        startRow++;
        startCol++;
        endCol--;
        endRow--;
    }
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    SpiralMatrix(arr);

    return 0;
}