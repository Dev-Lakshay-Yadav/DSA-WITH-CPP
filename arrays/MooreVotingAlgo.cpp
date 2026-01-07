#include <iostream>
#include <vector>
using namespace std;

// Brute force
vector<int> pairSumBruteForce(vector<int> arr, int target)
{
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// 2 pointer
vector<int> pairSumOptimized(vector<int> arr, int target)
{
    vector<int> ans;
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start < end)
    {
        if ((arr[start] + arr[end]) == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if ((arr[start] + arr[end]) < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return ans;
}

// Moore voting algo
int MajorityElement(vector<int> nums)
{
    int candidate = 0, count = 0;
    int ans = 0, maxCount = 0;
    for (int val : nums)
    {
        if (count == 0)
        {
            candidate = val;
        }
        if (val == candidate)
        {
            count++;
            maxCount = max(maxCount, count);
            if (maxCount > count)
            {
                ans = candidate;
            }
        }
        else
        {
            count--;
        }
    }
    return ans;
}

int main()
{
    // pair sum in sorted array
    int target = 9;
    vector<int> nums = {2, 7, 11, 15};
    // vector <int> ans = pairSumBruteForce(nums,target);
    // vector<int> ans = pairSumOptimized(nums, target);
    // cout << "Pair  indexes are : ";
    // for (int val : ans)
    // {
    //     cout << val << ",";
    // }

    // majority element by moore voting also -> most repeating element
    vector<int> arr = {1, 4, 2, 3, 1, 1, 1, 3, 4, 8, 4, 3, 1};
    cout << "Majority element is : " << MajorityElement(arr);

    return 0;
}