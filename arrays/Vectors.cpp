#include <vector>
#include <iostream>
using namespace std;
int main()
{
    // verctors are same like array just they are dynamic in nature so they do not have a fixed size

    // STL -> Standard template Library (pre written code saved here) -> vector , queeu , stack are stored here

    // vector <int> vec1;
    // cout << vec1[0]<<endl;   // gives segmentation fault because at that time vector do not have any value and vector is dynamic then this address not exists

    // vector <int> vec2 = {1,2,3};
    // cout<<vec2[1]<<endl;

    // vector <int> vec3(3,0);   // all 3 indexes values initialized to 0 and this will work for all values
    // cout<<vec3[1]<<endl;

    // with vectors we use a forEach loop which is kind of similar to for loop
    // in this loop val directly points to the value not the index
    // for(int val : vec3){
    // cout<<val<<endl;
    // }

    vector<char> vec = {'a', 'b', 'c'};

    // vector functions

    // Size of vector
    cout << "Size of vector : " << vec.size() << endl;

    // push_back Push new value at last of vector
    vec.push_back('z');
    cout << "Size of vector after push back : " << vec.size() << endl;

    // pop_back delete record from the last of vector
    vec.pop_back();
    cout << "Size of vector after pop back : " << vec.size() << endl;

    // Front print the front value of vector
    cout << vec.front() << endl;

    // Back print the back value of vector
    cout << vec.back() << endl;

    // at -> basically used to get a perticular index value
    cout << "Value at index 1 is : " << vec.at(1) << endl;

    // static vs dynamic Allocation
    // static -> Memory Allocation at compile time -> array (fixed size)
    // Dynamic -> Memory Allocation at run time -> vector (resizable)

    // Memory are of 2 types :-
    // Stack Memory -> static allocation occurs in this
    // Heap Memory -> dynamic allocation occurs in this

    // How vectors create in memory (Heap memory)
    // Suppose we create a vec with value {1}
    // Now in mwmory a vector created whose size is 1
    // So now we push_back a new value in this vector but this vector size is 1 so no space to store
    // Now a new vector created in memory with same name and same already stored value but with double size
    // now new vector size is 2 and new value easily added and old vector gets deleted from memory
    // Till now all good but if i want to add one more vlaue then there is one more thing occur which is capacity
    // it means when we add 3rd value then the current vector becomes twice so the capacity of vector becomes 4 but size is 2
    // after adding the third value the size of vector becomes 3 but capacity is still 4 capacity increace when vector gets twice

    return 0;
}