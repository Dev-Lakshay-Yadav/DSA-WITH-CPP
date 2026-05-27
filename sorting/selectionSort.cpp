// Selection sort
// n-1 iterations, n-1 comparisons in each iteration
// find the minimum element in unsorted array and swap it with the first element of the unsorted array
// basically we are dividing the array into two parts, sorted and unsorted, and we are moving the minimum element from unsorted to sorted part in each iteration
// first we assume whole array is unsorted and we are finding the minimum element in the whole array and swapping it with the first element of the array, then we are assuming that the first element is sorted and we are finding the minimum element in the remaining unsorted array and swapping it with the second element of the array, and so on until we have only one element left in the unsorted array which is already sorted
// time complexity: O(n^2) in all cases
// space complexity: O(1) because we are not using any extra space for sorting, we are sorting the array in place

#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void display(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    cout << "Before sorting: ";
    display(arr, n);
    selectionSort(arr, n);
    cout << "\nAfter sorting: ";
    display(arr, n);
    return 0;
}