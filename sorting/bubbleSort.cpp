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