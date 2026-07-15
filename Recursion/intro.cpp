// Recursion Introduction
// in recursion time complexity is O(n) and space complexity is O(n) because of the function call stack
// time complexity is O(n) because we are making n function calls and space complexity is O(n) because of the function call stack
// for finding time complexity we have 2 methods, one is by using recurrence relation and the other is by using the tree method
// recurrence relation is a mathematical equation that describes the time complexity of a recursive function in terms of the time complexity of its subproblems
// in recurrence relation we can use the master theorem to solve the recurrence relation and find the time complexity of the recursive function
// in tree method we can draw a tree of the recursive function and find the time complexity by counting the number of nodes in the tree
// for space complexity we can use the same methods as time complexity, but we have to consider the space used by the function call stack
// space complexity = depth of the recursion tree (basically the recursion call stack depth) * space used by each function call



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


// sum of n numbers
int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}


int main ()
{
    printNums(5);
    int x = factorial(5);
    cout<<endl;
    cout<<"factorial is : "<<x<<endl;

    cout<<sum(5)<<endl;
    return 0;
}