#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &arr, int k, int mid)
{
    int count = 1;
    int lastPos = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            count++;
            lastPos = arr[i];
        }
        if (count == k)
        {
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &arr, int k)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int start = 1, end = arr[n - 1] - arr[0], ans = 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, k, mid))
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int k = 3;

    cout << aggressiveCows(arr, k);
    return 0;
}