#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int mid, int totalPainters)
{
    int sum = 0, j = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
            return false;
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            sum = arr[i];
            j++;
        }
    }

    if (j <= totalPainters)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int painterPartition(vector<int> &arr, int k)
{
    int n = arr.size();
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        end += arr[i];
    }
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(arr, mid, k))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {5, 10, 30, 20, 15};
    int k = 3;

    cout << painterPartition(arr, k);

    return 0;
}