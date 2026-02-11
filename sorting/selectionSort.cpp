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