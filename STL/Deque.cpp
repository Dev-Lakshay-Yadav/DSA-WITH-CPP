// Sequence container: Queue

#include<iostream>
#include<deque>

using namespace std;

void displayDeque(const deque<int>& d) {
    for (int num : d) {
        cout << num << " ";
    }
    cout << endl;
}

int main ()
{
    // In stl queue is implemented as a double-ended queue (deque). It is a sequence container that allows fast insertion and deletion at both ends. It provides a first-in-first-out (FIFO) data structure.
    deque<int> d;

    // Adding elements to the queue
    d.push_back(10); // Adds 10 to the back of the queue
    d.push_back(20); // Adds 20 to the back of the queue
    d.push_back(30); // Adds 30 to the back of the queue
    d.push_front(5); // Adds 5 to the front of the queue
    d.push_front(1); // Adds 1 to the front of the queue

    cout << "Queue after adding elements: ";
    displayDeque(d);

    // Deleting elements from the queue
    d.pop_back(); // Removes the last element (30)
    d.pop_front(); // Removes the first element (1)

    cout << "Queue after deleting elements: ";
    displayDeque(d);

    // Functions on queue
    // pop_back() - Removes the last element from the queue.
    // pop_front() - Removes the first element from the queue.
    // push_back() - Adds an element at the back of the queue.
    // push_front() - Adds an element at the front of the queue.
    // size() - Returns the number of elements in the queue.
    // empty() - Checks if the queue is empty.
    // clear() - Removes all elements from the queue.
    // front() - Returns a reference to the first element in the queue.
    // back() - Returns a reference to the last element in the queue.

    return 0;
}