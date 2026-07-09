#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> optimized4Sum(vector<int> arr, int target)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int n = arr.size();

    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;

            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l];
                if (sum == target)
                {
                    ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                    l--, k++;

                    while (k < l && arr[k] == arr[k - 1])
                        k++;

                    while (k < l && arr[l] == arr[l + 1])
                        l--;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-2, -1, -1, 1, 1, 2, 2};

    vector<vector<int>> ans = optimized4Sum(nums, 0);
    for (auto triplet : ans)
    {
        cout << "[";
        for (auto i : triplet)
        {
            cout << i << " ";
        }
        cout << "] , ";
    }

    return 0;
}