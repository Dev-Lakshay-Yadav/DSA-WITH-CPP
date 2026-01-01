#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {1, 2, 3, 4, 5}; // array size 5 because it is already defined
    int price[] = {1, 2, 3};        // array size is 3 because not already desined and only have 3 values

    // cout<<"Marks"<<marks[0];

    // smallest and largest value in array
    int smallest = marks[0], largest = marks[0];
    int smallestIndex = 0, largestIndex = 0;
    int length = sizeof(marks) / sizeof(marks[0]);

    for (int i = 1; i < length; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
            smallestIndex = i;
        }
        if (marks[i] > largest)
        {
            largest = marks[i];
            largestIndex = i;
        }
    }

    // cout<<"Smallest value and their index in array is : "<<smallest<<","<<smallestIndex<<endl;
    // cout<<"Largest value and their in array is : "<<largest<<","<<largestIndex<<endl;

    // linear search
    int n = 3, index = 0;
    bool present = false;
    for (int i = 0; i < length; i++)
    {
        if (marks[i] == n)
        {
            index = i;
            present = true;
            break;
        }
    }

    if (present)
    {
        cout << "Yes value exists at index : " << index << endl;
    }
    else
    {
        cout << "Searched value not exists" << endl;
    }

    // Reverse an array
    int end = length - 1;
    int temp = 0;

    for (int start = 0; start < end; start++)
    {
        temp = marks[start];
        marks[start] = marks[end];
        marks[end] = temp;
        end--;
    }

    cout << "Reverse arrays is : ";
    for (int i = 0; i < length; i++)
    {
        cout << marks[i];
    }

    return 0;
}