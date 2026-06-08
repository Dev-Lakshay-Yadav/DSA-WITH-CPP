// Next  Permutation leetcode - 31

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Display(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
        int pivot=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
        
        if(pivot == -1){
            reverse(nums.begin(),nums.end());
        }else{
            for(int i=n-1;i>pivot;i--){
                if(nums[i]>nums[pivot]){
                    swap(nums[i],nums[pivot]);
                    break;
                }
            }

            reverse(nums.begin()+pivot+1,nums.end());
        }
}

int main ()
{
    vector <int> arr = {1,2,5,4,3};
    Display(arr);
    nextPermutation(arr);
    Display(arr);
    return 0;
}