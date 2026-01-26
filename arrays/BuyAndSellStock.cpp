#include<iostream>
#include<vector>

using namespace std;

int maxProfit (vector<int> arr){
    int profit=0,min_Price = INT16_MAX;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i] < min_Price){
            min_Price = arr[i];
        }
        if(arr[i]-min_Price > profit){
            profit = arr[i]-min_Price;
        }
    }
    return profit;
}
int main ()
{
    // buy and sell stock for maximum profit
    vector <int> arr = {7,1,5,3,6,4}; 
    cout << "Maximum profit is : "<<maxProfit(arr);
    return 0;
}