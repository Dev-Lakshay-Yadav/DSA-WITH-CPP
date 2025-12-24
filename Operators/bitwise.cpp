#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 7; // -> 3 -> 011 7 -> 111

    // biwise AND - &
    // cout<<(a&b)<<endl;   // 011 & 111 -> 011 = 3

    // biwise OR - |
    // cout<<(a|b)<<endl;  // 011 | 111 -> 111 = 7

    // biwise XOR - ^ (exclusive or)
    // cout<<(a^b)<<endl;  // 011 ^ 111 ->  100 = 4

    int n = 4;

    // bitwise leftshift <<
    // a<<b ==  a*(2 power b)
    cout << (n << 1) << endl; // left shift number multiply by 2
    // suppose here we have used n=4 so 4=100 so left shift means shift bits to left and add 0 to last 100 -> 1000 = 8  this is for 1 place shift if i shift 2 then 16, 3 then 32 etc

    // bitwise rightshift >>
    // a>>b ==  a/(2 power b)
    cout << (n >> 1) << endl; // right shift number divide by 2
    // suppose here we have used n=4 so 4=100 so right shift means shift bits to right and add 0 to start 100 -> 0010 = 2 this is for 1 place shift if i shift 2 then 1, 3 then 0 and now 0 is last

    // Local and Global variable
    // Scope of variable
    // Local and Global Scope

    // Data type modifiers -> long, short, long long, signed and unsigned

    return 0;
}