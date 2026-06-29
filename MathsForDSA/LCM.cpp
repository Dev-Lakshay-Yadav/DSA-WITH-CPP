// LCM -> lowest common multiple
// a*b = LCM(a,b) * GCD(a,b)
// LCM(a,b) = a*b / GCD(a,b)

#include<iostream>

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

using namespace std;
int main ()
{
    int a = 20, b = 28;
    cout<< "LCM is : " << (a*b) / EuclidAlgo2(a, b) << endl;
    return 0;
}