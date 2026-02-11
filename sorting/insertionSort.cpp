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