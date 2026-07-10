#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// brute force n square
vector<vector<int>> subArraySum(vector<int> arr, int target){
    vector<vector<int>> ans;
    int n = arr.size();

    for(int i=0;i<n;i++){
        int sum = 0;
        vector<int> sub;
        sub.push_back(arr[i]);
        for(int j=i;j<n;j++){
            sum+=arr[j];
            sub.push_back(arr[j]);
            if(sum == target){
                ans.push_back(sub);
            }
        }
    }
    return ans;
}


// now let's go to optimized option which is sliding window  and prefix sum
int subArraySumOptimized(vector<int> arr, int target){
    int n = arr.size();
    int count=0;

    vector<int> prefixSum(n,0);
    prefixSum[0]=arr[0];
    
    for(int i=1;i<n;i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    unordered_map <int,int> m;
    for(int j=0;j<n;j++){
        if(prefixSum[j] == target) count++;

        int value = prefixSum[j] - target;
        if(m.find(value) != m.end()){
            count += m[value];
        }
        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] = 0;
        }

        m[prefixSum[j]]++;
    }

    return count;

}



int main ()
{
    vector<int> arr = {9,4,20,3,10,5};

    vector<vector<int>> ans = subArraySum(arr,33);

    for(auto i : ans){
        cout<<"[";
        for(auto j : i){
            cout<<j<<",";
        }
        cout<<"],";
    }

    cout<<subArraySumOptimized(arr,33);

    return 0;
}