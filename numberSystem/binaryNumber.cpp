#include <iostream>
using namespace std;

int decimalToBinary(int n)
{
    int i = 1;
    int ans = 0;
    while (n != 0)
    {
        int rem = n % 2;
        n = n / 2;
        ans = ans + i * rem;
        i = i * 10;
    }
    return ans;
}

int binaryToDecimal(int n)
{
    int i = 1;
    int ans = 0;
    while (n != 0)
    {
        int rem = n % 10;
        n = n / 10;
        ans = ans + i * rem;
        i = i * 2;
    }
    return ans;
}
int main()
{
    // Decima to binary
    // 0 -> 0000
    // 1 -> 0001
    // 2 -> 0010
    // 3 -> 0011
    // 4 -> 0100
    // 5 -> 0101
    // 6 -> 0110
    // 7 -> 0111
    // 8 -> 1000
    // 9 -> 1001
    // 10 -> 1010

    // Decimal to binary conversion
    int n = 0;
    cout << "Enter a decimal number : ";
    cin >> n;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << "Binary of " << i << " is : " << decimalToBinary(i) << endl;
    // }
    
    // Binary to decimal
    cout << binaryToDecimal(n) << endl;
    
    
    return 0;
}