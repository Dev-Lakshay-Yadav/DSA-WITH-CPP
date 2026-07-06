#include <iostream>
#include <vector>
using namespace std;

// Search in a 2D matrix
bool binarySearch(vector<int> &arr, int a)
{
    int end = arr.size() - 1;
    int start = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == a)
        {
            return true;
        }
        else if (arr[mid] < a)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target >= matrix[mid][0] && target <= matrix[mid][col - 1])
        { // check if the target is in the range of the current row
            if (binarySearch(matrix[mid], target))
            { // if it is, then do a binary search on that row
                return true;
            }
        }
        else if (target < matrix[mid][0])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return false;
}

bool searchMatrix2(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int row = 0, col = cols - 1;

    while (row < rows && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return true;
        }
        else if (matrix[row][col] < target)
        {
            row++;
        }
        else
        {
            col--;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> arr2 = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    cout << searchMatrix(arr, 5);
    cout << searchMatrix2(arr2, 15);

    return 0;
}
