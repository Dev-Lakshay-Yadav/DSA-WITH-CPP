#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n, 1);

    int left = 1;
    for (int i = 0; i < n; i++)
    {
        ans[i] *= left;
        left *= arr[i];
    }
    int right = 1;    
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= right;
        right *= arr[i];
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    cout << "value before : ";
    for (int val : arr)
    { 
        cout << val << ",";
    }
    cout << endl
         << "value after : ";
    vector<int> ans = productExceptSelf(arr);
    for (int val : ans)
    {
        cout << val << ",";
    }
    return 0;
}