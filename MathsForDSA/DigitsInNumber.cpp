#include <iostream>
#include <cmath>
using namespace std;

void printDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        int rem = n % 10;
        n = n / 10;
        count++;
        // cout<<rem<<endl;
    }
    cout << count << endl;
}

int main()
{
    int n = 3568;
    printDigits(n);

    // shortcut to find number if digits in a number
    cout << (int)(log10(n) + 1) << endl;

    return 0;
}