#include<iostream>
using namespace std;

// pass by reference - pointer method
void changeA(int *ptr){
    *ptr=20;
}


int main ()
{
    // Pointers
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;

    cout << &a <<endl;
    cout << ptr <<endl;
    cout << *ptr <<endl;
    cout << &ptr <<endl;
    cout << ptr2 <<endl;
    cout << *ptr2 <<endl;
    cout << **ptr2 <<endl;


    // null pointer
    int* ptr3 = NULL;
    cout << ptr3 << endl;

    changeA(&a);
    cout << "After change : "<<*ptr << endl;


    // Array pointers
    int arr[] = {1,2,3,4,5};

    // array is an constant pointer
    cout << arr << endl;    // output the 0 index address
    cout << *arr << endl ; // value at 0 index

    int* ptr4 = &arr[0];


    // operattors
    cout << "Operators :-"<<endl;
    cout << *ptr4 << endl;
    ptr4++;
    cout << *ptr4 << endl;
    ptr4--;
    cout << *ptr4 << endl;


    return 0;
}