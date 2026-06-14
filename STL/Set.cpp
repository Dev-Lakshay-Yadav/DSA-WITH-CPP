// Non Sequential Container

#include <iostream>
#include <set>

using namespace std;

void display(set<int> s)
{
    for (auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(5);

    // Set store unique elements only so no duplicasy occur even size also not increase
    s.insert(2);
    s.insert(4);
    s.insert(5);

    s.emplace(9);

    cout << "set size : " << s.size() << endl;
    display(s);

    cout << s.count(2) << endl;

    if (s.find(2) != s.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // size, empty and erase also work

    // Lower bound basically return the same value that passed if found othewise return just larger value than that
    // Lower bound means that the return value should not be less than the key(passed value)
    cout << "Lower bound : " << *(s.lower_bound(3)) << endl; // and if passed value is too large and not in set so final local return basically /0

    // Upper bound basically never return the same value that passed if found but it always return the closest larger value that the passed value but not same
    // Upper bound means that the return value should be greater than the key(passed value) equal is not acceptable here
    cout << "Upper bound : " << *(s.upper_bound(4)) << endl;

    // -> and these lower and upper bound not exists at unordered set due to no sorting

    // Other sets

    // Multi Set -> store multiple sets, duplicasy allowed

    // Unordered Set -> unordered elements and same time complexity of func() -> Big O(1) in rare cases it go to O(n)

    return 0;
}