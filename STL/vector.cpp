// Sequential container : Vector
#include<iostream>
#include<vector>

using namespace std;

void printVector(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main ()
{
    vector<int> v1; // empty vector of integers
    vector<int> v2(5); // vector of integers with 5 default-initialized elements (0)
    vector<int> v3(5, 10); // vector of integers with 5 elements initialized to 10
    vector<int> v4{1, 2, 3, 4, 5}; // vector of integers initialized with a list of values
    vector<int> v5(v4); // vector of integers initialized as a copy of v4

    v4.size(); // get the number of elements in the vector
    v4.capacity(); // get the capacity of the vector (the number of elements it can hold before it needs to resize) 

    v4.push_back(6); // add an element to the end of the vector
    cout << "v4: ";
    printVector(v4);

    v4.emplace_back(7); // add an element to the end of the vector using emplace_back
    cout << "v4 after emplace_back: ";
    printVector(v4);

    v4.pop_back(); // remove the last element from the vector
    cout << "v4 after pop_back: "; 
    printVector(v4);

    v4.at(0) = 0; // modify the first element of the vector
    cout << "v4 after modifying the first element: ";
    printVector(v4);

    v4.front() = 0; // modify the first element of the vector using front()
    cout << "v4 after modifying the first element using front(): ";
    printVector(v4);

    v4.end()[-1] = 0; // modify the last element of the vector using end()
    cout << "v4 after modifying the last element using end(): ";
    printVector(v4);

    // Costly functions has big o notation of O(n) or worse, while cheap functions has big o notation of O(1) or O(log n)
    v4.erase(v4.begin()+2); // remove the third element from the vector (costly function)
    cout << "v4 after erase: ";
    printVector(v4);

    v4.erase(v4.begin(), v4.end()); // remove all elements from the vector (costly function)
    cout << "v4 after erase all: ";
    printVector(v4);

    v4.insert(v4.begin(), 10); // insert an element at the beginning of the vector (costly function)
    cout << "v4 after insert: ";
    printVector(v4);

    v4.clear(); // remove all elements from the vector (cheap function)
    cout << "v4 after clear: ";
    printVector(v4);

    v4.empty(); // check if the vector is empty (cheap function)

    // vector iterators
    cout << "v4.begin(): " << *v4.begin() << endl; // returns an iterator to the first element of the vector
    cout << "v4.end(): " << *(v4.end() - 1) << endl; // returns an iterator to the past-the-end element of the vector basically not the last element but the one after the last element

    vector<int>::iterator it = v5.begin(); // create an iterator to the first element of the vector
    cout << "Iterator it: " << *it << endl; // dereference the iterator
    for (it = v5.begin(); it != v5.end(); ++it) { // iterate through the vector using the iterator
        cout << *it << " ";
    }
    cout << endl;

    vector<int>::reverse_iterator rit = v5.rbegin(); // create a reverse iterator to the last element of the vector
    cout << "Reverse iterator rit: " << *rit << endl; // dereference the reverse iterator
    for (rit = v5.rbegin(); rit != v5.rend(); ++rit) { // iterate through the vector in reverse using the reverse iterator
        cout << *rit << " ";
    }
    cout << endl;

    // auto keyword can be used to declare an iterator without specifying its type explicitly
    for (auto it = v5.begin(); it != v5.end(); ++it) { // iterate through the vector using a range-based for loop
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}