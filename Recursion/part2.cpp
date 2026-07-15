#include <iostream>
#include <vector>
using namespace std;

// fibonacci series with recursion
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// check array is sorted or not
bool isSorted(int arr[], int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }
    if (arr[n - 1] >= arr[n - 2])
    {
        return isSorted(arr, n - 1);
    }
    return false;
}

// Binary Search with recursion
bool binarySearch(int arr[], int start, int end, int target)
{
    if (start > end)
        return false;
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
        return true;
    if (arr[mid] > target)
        return binarySearch(arr, start, mid - 1, target);
    return binarySearch(arr, mid + 1, end, target);
}

int main()
{
    cout << fibonacci(6) << endl;

    int arr[] = {1, 2, 3, 4, 5};

    if (isSorted(arr, 5))
        cout << "Sorted" << endl;
    else
        cout << "Not Sorted" << endl;

    cout << binarySearch(arr, 0, 4, 3) << endl;

    return 0;
}