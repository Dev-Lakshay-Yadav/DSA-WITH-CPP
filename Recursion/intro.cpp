// Recursion Introduction

#include<iostream>
using namespace std;

// recursion occurs when a function calls itself
void abc(){
    abc();
}

void printNums(int n){
    if(n==1){
        cout<<n;
        return;
    }
    cout<<n<<" ";
    printNums(n-1);
}


// factorial
int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}



int main ()
{
    printNums(5);
    int x = factorial(5);
    cout<<endl;
    cout<<"factorial is : "<<x;
    return 0;
}