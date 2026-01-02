#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // Sub arrays of an array -> basically contiguous part of main array
    // Suppose main array is {1,2,3,4,5}
    // then their sub arrays are n*(n+1)/2 -> 5(5+1)/2 -> 15
    // 1  2  3  4  5         -> (1) -> 5 sub array
    // 1,2   2,3  3,4   4,5  -> (2) -> 4 sub array
    // 1,2,3   2,3,4  3,4,5  -> (3) -> 3 sub array
    // 1,2,3,4   2,3,4,5     -> (4) -> 2 sub array
    // 1,2,3,4,5             -> (5) -> 1 sub array

    // to find an subarray we need to find the start and end of that sub array
    // we have to fix our start then just find the end points

    // int arr[5] = {1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int start = 0 ; start<n ; start++){
    //     for(int end=start ; end < n ;end++){
    //         for(int i =start ; i<=end ; i++){
    //             cout <<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // Maximum sub array sum
    // Brute force -> Big On3
    // int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int max_sum = 0;
    // for (int start = 0; start < n; start++)
    // {
    //     for (int end = start; end < n; end++)
    //     {
    //         int sum = 0;
    //         for (int i = start; i <= end; i++)
    //         {
    //             sum += arr[i];
    //         }
    //         max_sum = max(max_sum,sum);
    //     }
    // }
    // cout << "Max sum is : " << max_sum;

    // minor Optimized approach
    // int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int max_sum = INT_MIN;
    // for (int start = 0; start < n; start++)
    // {
    //     int sum = 0;
    //     for (int end = start; end < n; end++)
    //     {
    //         sum += arr[end];
    //         max_sum = max(max_sum,sum);
    //     }
    // }
    // cout << "Max sum is : " << max_sum;

    // major optimized -> kadane's algorithm
    // kadane's algo works on 3 condition
    // -> if we add small +ve number with large +ve number then result is +ve
    // -> if we add small -ve number with large +ve number then result is +ve
    // -> if we add small +ve number with large -ve number then result is -ve
    // so if we add a large -ve to our subarray sum then it decrease it so instead of big -ve add 0

    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = INT_MIN, cur_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cur_sum += arr[i];
        max_sum = (max_sum, cur_sum);
        if (cur_sum < 0)
        {
            cur_sum = 0;
        }
    }
    cout << "Max sum is : " << max_sum;

    return 0;
}