// GCD -> Greatest common divisor || HCF -> Highest common factor

#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b)
{
    int ans = 1;
    int start = 1, end = min(a, b);

    while (start <= end)
    {
        if (a % end == 0 && b % end == 0)
        {
            return end;
        }
        end--;
    }
    return start;
}

// Euclid's Algorithm for finding GCD
// so according to euclid's algo gcd(a,b) = gcd (a-b,b)  if a>b  or (a,b-a) if b>a
// suppose gcd(20,28) = gcd(20,28-20)  => gcd(20,8)
// then reapply euclid's gcd(20,8) = gcd(20-8,8) => gcd(12,8)1
// then reapply euclid's gcd(12,8) = gcd(12-8,8) => gcd(4,8)
// then reapply euclid's gcd(8,8) = gcd(8-4,4) => gcd(4,4)
// then ans is 4 because both are equal and if (0,4) then 4 is ans and same for (4,0) ans is 4

// Recusion but its substraction logis which has too many iterations
int EuclidAlgo(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    else if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        if (a > b)
        {
            return EuclidAlgo(a - b, b);
        }
        else
        {
            return EuclidAlgo(b - a, a);
        }
    }
}

// Now go for the most optimized version which is basically by modulus

int EuclidAlgo2(int a, int b)
{
    while (b != 0)
    {
        int reminder = a % b;
        a = b;
        b = reminder;
    }
    return a;
}

int main()
{
    int a = 20, b = 28;
    // cout<<GCD(a,b);
    cout << EuclidAlgo(a, b) << endl;
    cout << EuclidAlgo2(a, b) << endl;
    return 0;
}