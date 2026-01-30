#include <iostream>
#include <vector>
using namespace std;

int searchElement(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            cout << "Yes found : ";
            return arr[mid];
        }
    }
    cout << "Not found";
    return -1;
}

// with recursion
int binarySearchRecursion(vector<int> &arr, int target, int start, int end)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;
    if (target == arr[mid])
    {
        return mid;
    }
    if (target > arr[mid])
    {
        binarySearchRecursion(arr, target, mid + 1, end);
    }
    else
    {
        binarySearchRecursion(arr, target, start, mid - 1);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;
    cout << searchElement(arr, target);
    cout << binarySearchRecursion(arr, target, 0, arr.size() - 1);
    return 0;
}