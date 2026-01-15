#include <iostream>
using namespace std;

// By using binary exponentiation
double power(double x, int n)
{
    double ans = 1;
    if (x == 0)
    {
        return 0;
    }
    else if (x == -1 && n % 2 == 1)
    {
        return -1;
    }
    else if (n == 0 || x == 1 || (x == -1 && n % 2 == 0))
    {
        return ans;
    }
    else if (n == 1)
    {
        return x;
    }
    else
    {
        int z = n; // because double has decimal values so divide by 2 issue in future
        if (n < 0)
        {
            x = 1 / x;
            z = -(z);
        }
        while (z > 0)
        {
            if (z % 2 != 0)
            {
                ans = ans * x;
                z--;
            }
            else
            {
                x = x * x;
                z = z / 2;
            }
        }
    }
    return ans;
}
int main()
{
    int x = 2, n = 10;
    cout << power(x, n);
    return 0;
}