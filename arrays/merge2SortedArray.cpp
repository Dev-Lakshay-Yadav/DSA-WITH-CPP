// merge 2 sorted array -> leetcode 88. Merge Sorted Array

#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void mergeArrays(vector <int> &arr1,int m, vector <int> &arr2,int n){
    int i=m-1,j=n-1,idx=m+n-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[idx] = arr1[i];
            i--;
        }
        else{
            arr1[idx] = arr2[j];
            j--;
        }
        idx--;
    }
    while (j>=0)
    {
        arr1[idx] = arr2[j];
        j--;
        idx--;
    }
}

int main ()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3,n=3;

    cout << "Before merging: " << endl;
    display(nums1);
    display(nums2);

    mergeArrays(nums1,m,nums2,n);

    cout << "After merging: " << endl;
    display(nums1);
    display(nums2);

    
    return 0;
}