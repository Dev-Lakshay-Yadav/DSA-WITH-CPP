#include <iostream>
#include <cmath>
using namespace std;

int digitsCount(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

bool isArmstrong(int n)
{
    int temp = n, sum = 0;
    int digits = digitsCount(n);
    while (temp != 0)
    {
        int digit = temp % 10;
        int cube = round(pow(digit, digits));
        sum += cube;
        temp = temp / 10;
    }
    if (n == sum)
        return true;
    else
        return false;
}

int main()
{
    int n = 153;
    if (isArmstrong(n))
    {
        cout << "Yes armstrong" << endl;
    }
    else
    {
        cout << "Not armstrong" << endl;
    }
    return 0;
}