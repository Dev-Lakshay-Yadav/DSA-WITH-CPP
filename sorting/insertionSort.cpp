// Insertion sort
// n-1 iterations, n-1 comparisons in each iteration
// we are dividing the array into two parts, sorted and unsorted, and we are moving the first element of the unsorted part to the correct position in the sorted part in each iteration

// basically we are assuming that the first element is sorted and we are taking the first element of the unsorted part and comparing it with the elements of the sorted part and moving the elements of the sorted part one position ahead until we find the correct position for the first element of the unsorted part and then we are placing it at its correct position in the sorted part, then we are assuming that the first two elements are sorted and we are taking the first element of the unsorted part and comparing it with the elements of the sorted part and moving the elements of the sorted part one position ahead until we find the correct position for the first element of the unsorted part and then we are placing it at its correct position in the sorted part, and so on until we have only one element left in the unsorted array which is already sorted

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

void insertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int prev = i - 1;
        int curr = arr[i];

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    cout << "Before sorting: ";
    display(arr, n);
    insertionSort(arr, n);
    cout << "\nAfter sorting: ";
    display(arr, n);
    return 0;
}