#include<iostream>
#include<vector>

using namespace std;

int searchRotatedSortedArray(vector <int> arr, int target){
    int n = arr.size();
    int start = 0, end=n-1;
    while(start<=end){
        int mid = start + (end - start)/2;

        if (arr[mid] == target) return mid;

        else if(arr[start] <= arr[mid]){
            if(arr[start] <= target && target <= arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else {
            if(arr[mid] <= target && target <= arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main ()
{
    vector <int> arr = {3,4,5,6,7,0,1,2,3};
    int target = 0;
    cout << searchRotatedSortedArray(arr,target);
    return 0;
}