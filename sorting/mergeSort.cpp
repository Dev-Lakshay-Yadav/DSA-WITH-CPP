// merge sort
// divide and conquer algorithm
// we are dividing the array into two halves and then we are sorting the two halves and then


#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void mergeSort(vector<int> arr, int n) {}

int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = arr.size();

    cout << "Before sorting: ";
    display(arr, n);

    mergeSort(arr, n);

    cout << "\nAfter sorting: ";
    display(arr, n);

    return 0;
}