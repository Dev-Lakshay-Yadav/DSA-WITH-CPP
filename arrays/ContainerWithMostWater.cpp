#include<iostream>
#include<vector>
using namespace std;

int maxVolContainer(vector <int>arr){
    int ans=0,left=0,right=arr.size()-1;
    while(left<right){
        ans = max(ans,(min(arr[left],arr[right])*(right - left)));
        if(arr[left]<arr[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return ans;
}

int main ()
{
     vector <int> arr = {1,8,6,2,5,4,8,3,7};
     cout << "Max water hold capacity : "<<maxVolContainer(arr)<<endl;
    return 0;
}