// bubble sort 
// n-1 iterations, n-1 comparisons in each iteration
// compare with the adjacent element and swap if the current element is greater than the adjacent element
// push large element at last of the array in each iteration
// time complexity: O(n^2) in worst case and O(n) in best case when the array is already sorted
// space complexity: O(1) as it is an in-place sorting algorithm
// stable sorting algorithm as it does not change the relative order of equal elements

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

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = arr.size();

    cout << "Before sorting: ";
    display(arr, n);

    bubbleSort(arr, n);

    cout << "\nAfter sorting: ";
    display(arr, n);

    return 0;
}