// sort an array of 0s, 1s and 2s
// just count 0,1,2 in array and then overwrite 0 thne 1 then 2 😂


// Optimized also Dutch National Flag algo
// low,mid,high
// if mid is 0 then swap low and mid and low++ and mid++
// if mid is 1 then mid++
// if mid is 2 then swap mid and high and high-- and mid stay same because we need to check the swapped element as well
// basically we are putting 0s in the beginning and 2s in the end and 1s will be in the middle


#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> arr,int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void sortArray(vector<int> &arr, int n){
    int countZero=0, countOne=0, countTwo=0;

    for(int i = 0;i<n;i++){
        if(arr[i] == 0) countZero++;
        else if(arr[i] == 1) countOne++;
        else if(arr[i] == 2) countTwo++;
        else continue;
    }
    for (int i=0 ;i<n ; i++){
        if(countZero > 0){
            arr[i] = 0;
            countZero--;
            continue;
        }
        else if(countOne > 0){
            arr[i] = 1;
            countOne--;
            continue;
        }
        else if(countTwo > 0){
            arr[i] = 2;
            countTwo--;
            continue;
        }
        else{
            continue;
        }
    }
}


void DutchNationalFlagAlgo(vector <int> &arr,int n){
    int low = 0,mid=0,high=n-1;
    while (mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}


int main ()
{
    vector <int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();
    cout<<"Original array :-"<<endl;
    display(arr,n);
    // sortArray(arr,n);
    DutchNationalFlagAlgo(arr,n);
    cout<<"Sorted array :-"<<endl;
    display(arr,n);
    return 0;
}