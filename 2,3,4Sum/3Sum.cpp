#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

// i+j+k = 0
// k = -(i+j)

// n square with log(uniquetriplets) complexity but not well optimized
vector<vector<int>> threeSum(vector<int> arr)
{
    int n = arr.size();
    set<vector<int>> uniqueTriplets;
    for (int i = 0; i < n - 1; i++)
    {
        set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int k = -(arr[i] + arr[j]);
            if (s.find(k) != s.end())
            {
                vector<int> triplet = {arr[i], arr[j], k};
                sort(triplet.begin(), triplet.end());
                uniqueTriplets.insert(triplet);
            }
            s.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
    return ans;
}

// n square only
vector<vector<int>> optimized3Sum(vector<int> arr)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == 0)
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                k--, j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // n2 log(unique) approach
    // vector<vector<int>> ans = threeSum(nums);
    // for(auto triplet:ans){
    //     cout<<"[";
    //     for(auto i:triplet){
    //         cout<<i<<" ";
    //     }
    //     cout<<"] , ";
    // }

    // final optimized approach
    vector<vector<int>> ans = optimized3Sum(nums);
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