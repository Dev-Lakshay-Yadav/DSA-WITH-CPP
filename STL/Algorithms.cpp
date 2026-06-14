#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " " ;
    }
    cout<<endl;
}

void displayVector(vector <int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " " ;
    }
    cout<<endl;
}

void displayVectorPair(vector <pair<int,int>> arr){
    for(auto val:arr){
        cout<<"("<<val.first<< "," <<val.second<<")"<<",";
    }
    cout<<endl;
}

bool comparator(pair <int,int> p1, pair <int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    
    if(p1.first < p2.first) return true;
    else return false;
}

int main ()
{
    // Sorting
    int arr[]={2,4,7,3,6,8,1};
    int n  = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+7);    // start and end range and arr is itself pointer arr is 0 index 
    displayArray(arr,n);
    // Descending sort
    sort(arr,arr+7,greater<int>());
    displayArray(arr,n);
    
    cout<<"#@#@#@#@#@#@#     Vectors      #@#@#@#@#@#@#@"<<endl;

    vector <int> nums={2,4,7,3,6,8,1};
    sort(nums.begin(),nums.end());
    displayVector(nums);
    
    
    vector <pair<int,int>> pairnums = {{1,5},{8,4},{9,2},{6,7}};  // basically sort on the basis of first element of pair
    sort(pairnums.begin(),pairnums.end());
    displayVectorPair(pairnums); 

    // custom comparator sorting -> second value based sorting and if second value equal then first value based
    sort(pairnums.begin(),pairnums.end(),comparator);
    displayVectorPair(pairnums); 




    // Reverse

    vector <int> vec = {1,2,3,4,5};
    // reverse(vec.begin(),vec.end());
    displayVector(vec);
    reverse(vec.begin()+1,vec.begin()+3);   // ranged reverse
    displayVector(vec);


    // Next Permutation and prev permutation
    // abc,acb,bac,bca,cab,cba

    string s= "abc",a = "abc";
    next_permutation(s.begin(),s.end());
    cout<<s<<endl;
    
    prev_permutation(a.begin(),a.end());
    cout<<a<<endl;


    // min and max
    cout<<max(2,3)<<endl;
    cout<<min(2,3)<<endl;

    // swap 
    int x=12,y=16;
    swap(x,y);
    cout<<x<<" "<<y<<endl;


    // Max and min element
    cout<<*(max_element(vec.begin(),vec.end()))<<endl;
    cout<<*(min_element(vec.begin(),vec.end()))<<endl;


    // Binary search
    cout << binary_search(vec.begin(),vec.end(),4)<<endl;  // return true and false

    // count set bits  -> mostly in competitive programming
    int z = 15;
    long int c=15;
    long long int j=15;
    cout<<__builtin_popcount(z)<<endl;   // basically in binary 15 is  1111 so set bits are 4
    cout<<__builtin_popcountl(c)<<endl;   // basically for long int values
    cout<<__builtin_popcountll(j)<<endl;   // basically for long long int values


    
    return 0;
}