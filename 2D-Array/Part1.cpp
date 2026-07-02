#include<iostream>
#include<climits>
#include<vector>
using namespace std;


bool LinearSearch(int arr[][3], int rows, int cols, int key)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int getMaxRowSum(int arr[][3], int rows, int cols)
{
    int maxSum = INT_MIN;
    for(int i=0;i<rows;i++)
    {
        int sum = 0;
        for(int j=0;j<cols;j++)
        {
            sum += arr[i][j];
        }
        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }
    return maxSum;
}


int getMaxColSum(int arr[][3], int rows, int cols)
{
    int maxSum = INT_MIN;
    for(int j=0;j<cols;j++)
    {
        int sum = 0;
        for(int i=0;i<rows;i++)
        {
            sum += arr[i][j];
        }
        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }
    return maxSum;
}


int PrimaryDiagonalSum(int arr[][3], int rows, int cols)
{
    int sum = 0;
    for(int i=0;i<rows;i++)
    {
        sum += arr[i][i];
    }
    return sum;
}

int SecondaryDiagonalSum(int arr[][3], int rows, int cols)
{
    int sum = 0;
    for(int i=0;i<rows;i++)
    {
        sum += arr[i][cols-i-1];
    }
    return sum;
}


int DiagonalSum(int arr[][3], int rows, int cols)
{
    if (rows != cols)
        return -1;   // or handle as needed

    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        sum += arr[i][i];                 // Primary diagonal
        sum += arr[i][cols - i - 1];      // Secondary diagonal
    }

    // Subtract center element only for odd-sized matrices
    if (rows % 2 == 1)
        sum -= arr[rows / 2][cols / 2];

    return sum;
}

int main ()
{
    int arr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows = 4;
    int cols = 3;

    cout<<"The 2D array elements 1,2 are: "<<arr[1][2]<<endl;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // in memory 2d array are also stored in linear fashion, so we can also access the elements of 2d array using pointer arithmetic
    // but it has 2 ways to store row major and column major, in c++ it is row major, and col major is used in fortran, so we can access the elements of 2d array using pointer arithmetic in row major order
    // row major order means that the elements of the array are stored in memory row by row, so the first row is stored first, then the second row, and so on. So we can access the elements of 2d array using pointer arithmetic in row major order as follows:
    // eg -> 1,2,3,4,5,6,7,8,9,10,11,12
    // col major order means that the elements of the array are stored in memory column by column, so the first column is stored first, then the second column, and so on. So we can access the elements of 2d array using pointer arithmetic in col major order as follows:
    // eg -> 1,4,7,10,2,5,8,11,3,6,9,12



    // Linear search in 2D array using pointer arithmetic
    int key = 5;
    if(LinearSearch(arr, rows, cols, key))
    {
        cout<<"Element "<<key<<" is found in the 2D array"<<endl;
    }
    else
    {
        cout<<"Element "<<key<<" is not found in the 2D array"<<endl;
    }


    // Get the maximum sum of rows in 2D array
    int maxSum = getMaxRowSum(arr, rows, cols);
    cout<<"The maximum sum of rows in the 2D array is: "<<maxSum<<endl;

    // Get the maximum sum of columns in 2D array
    int maxColSum = getMaxColSum(arr, rows, cols);
    cout<<"The maximum sum of columns in the 2D array is: "<<maxColSum<<endl;

    // Get the sum of primary diagonal in 2D array
    int primaryDiagonalSum = PrimaryDiagonalSum(arr, rows, cols);
    cout<<"The sum of primary diagonal in the 2D array is: "<<primaryDiagonalSum<<endl;

    // Get the sum of secondary diagonal in 2D array
    int secondaryDiagonalSum = SecondaryDiagonalSum(arr, rows, cols);
    cout<<"The sum of secondary diagonal in the 2D array is: "<<secondaryDiagonalSum<<endl;

    // Get the sum of both diagonals in 2D array
    int diagonalSum = DiagonalSum(arr, rows, cols);
    cout<<"The sum of both diagonals in the 2D array is: "<<diagonalSum<<endl;


    // 2D vector in C++ is a vector of vectors, it is a dynamic array, so we can create a 2D vector in C++ as follows:
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    cout<<"The 2D vector elements 1,2 are: "<<vec[1][2]<<endl;

    int vecRows = vec.size();
    int vecCols = vec[0].size();

    return 0;
}