// Sequence Container: List

#include<iostream>
#include<list>
using namespace std;

void displayList(const list<int>& lst) {
    for (int num : lst) {
        cout << num << " ";
    }
    cout << endl;
}

int main ()
{
    // In stl list is implemented as a doubly linked list. It is a sequence container that allows non-contiguous memory allocation. It provides fast insertion and deletion operations at any position in the list.

    list<int> myList;

    // Adding elements to the list
    myList.push_back(10); // Adds 10 at the end of the list
    myList.push_back(20); // Adds 20 at the end of the list
    myList.push_front(5); // Adds 5 at the beginning of the list
    myList.push_front(1); // Adds 1 at the beginning of the list

    cout << "List after adding elements: ";
    displayList(myList);

    // Deleting elements from the list
    myList.pop_back(); // Removes the last element (20)
    myList.pop_front(); // Removes the first element (1)

    cout << "List after deleting elements: ";
    displayList(myList);

    // Functions on list
    // pop_back() - Removes the last element from the list.
    // pop_front() - Removes the first element from the list.
    // push_back() - Adds an element at the end of the list.
    // push_front() - Adds an element at the beginning of the list.
    // size() - Returns the number of elements in the list.
    // empty() - Checks if the list is empty.
    // clear() - Removes all elements from the list.
    // front() - Returns a reference to the first element in the list.
    // back() - Returns a reference to the last element in the list.
    // insert() - Inserts elements at a specified position in the list.
    // erase() - Removes elements from a specified position in the list.
    // sort() - Sorts the elements in the list.
    // reverse() - Reverses the order of the elements in the list.
    // merge() - Merges two sorted lists into one sorted list.
    // unique() - Removes consecutive duplicate elements from the list.

    return 0;
}