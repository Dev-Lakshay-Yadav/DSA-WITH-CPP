#include <iostream>
#include <vector>

using namespace std;

// we can solve this with set also
// but we'll solve with slow-fast pointer - linked list - basically this slow fast approach is used to detect cycle in linked list
// this algo is also known as Floyd's Cycle Detection (Tortoise and Hare) algorithm.

int findDuplicate(vector<int> &arr)
{
    int slow = arr[0], fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main()
{
    vector<int> arr = {3, 1, 3, 4, 2};
    cout << findDuplicate(arr);

    return 0;
}