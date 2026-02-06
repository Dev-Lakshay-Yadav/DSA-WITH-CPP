#include <iostream>
#include <vector>
using namespace std;

bool isValidOrNot(vector<int> &arr, int allowedPages, int students)
{
    int stu = 1, pages = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > allowedPages)
            return false;
        if (pages + arr[i] <= allowedPages)
            pages += arr[i];
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    if (stu > students)
        return false;
    else
        return true;
}

int allocateBooks(vector<int> &arr, int students)
{
    int start = 0, end = 0, ans = 0;

    if (arr.size() < students)
        return -1;

    for (int i = 0; i < arr.size(); i++)
        end += arr[i];

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValidOrNot(arr, mid, students))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    // vector<int> arr = {15,17,20};
    int m = 2;

    cout << "Final ans is : " << allocateBooks(arr, m);

    return 0;
}