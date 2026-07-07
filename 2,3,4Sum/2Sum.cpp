#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// hashing

vector<int> Sum2Number(vector<int> arr, int target)
{
    int n = arr.size();
    int first, second;
    unordered_map<int, int> temp;

    for (int i = 0; i < n; i++)
    {
        first = arr[i];
        second = target - first;
        if (temp.find(second) != temp.end())
        {
            return {temp[second], i};
        }
        temp.insert({first, i});
    }
    return {};
}

int main()
{
    vector<int> arr = {5, 2, 11, 7, 15};
    int target = 9;

    vector<int> ans = Sum2Number(arr, target);

    for (int i : ans)
    {
        cout << i << ",";
    }

    return 0;
}