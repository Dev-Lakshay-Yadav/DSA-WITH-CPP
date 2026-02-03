#include<iostream>
#include<vector>
using namespace std;

// int singleElementInSortedArray(vector <int> &arr){
//     int start =0,end=arr.size()-1;

//     while(start <= end){
//         int mid = start + (end-start)/2;

//         if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]) return arr[mid];

//         else if(arr[mid-1] == arr[mid]){
//             if(mid % 2 == 0){
//                 end = mid-1;
//             }
//             else{
//                 start = mid+1;
//             }
//         }
//         else{
//             if(mid % 2 == 0){
//                 start = mid+1;
//             }
//             else{
//                 end = mid-1;
//             }
//         }
//     }
//     return -1;
// }


int singleElementInSortedArray(vector <int> &arr){
    int start =0,end=arr.size()-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]) return arr[mid];

        else if(mid % 2 == 0){
            if(arr[mid-1] == arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{
            if(arr[mid-1] == arr[mid]){
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
    vector <int> arr = {3,3,7,7,10,11,11};
    cout << singleElementInSortedArray(arr);
    return 0;
}