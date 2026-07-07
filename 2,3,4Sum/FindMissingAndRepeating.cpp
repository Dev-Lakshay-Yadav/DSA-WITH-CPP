#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> missingAndRepeating(vector<vector<int>> arr){
    int n = arr.size();
    unordered_set<int> temp;
    int a,b;
    for(int i=0;i<n ;i++){
        for(int j=0;j<n;j++){
            if(temp.find(arr[i][j]) != temp.end()){
                a=arr[i][j];
                break;
            }else{
                temp.insert(arr[i][j]);
            }
        }
    }

    int actrualSum=0,gridSum=0;
    for(int i=1;i<= n*n ;i++){
        actrualSum+=i;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            gridSum+=arr[i][j];
        }
    }
    b = actrualSum-(gridSum-a);
    return{a,b};
} 


int main ()
{
    vector<vector<int>> arr = {{9,1,7},{8,9,2},{3,4,6}};

    vector<int> ans = missingAndRepeating(arr);

    for(int i: ans){
        cout<<i<<",";
    }

    return 0;
}