#include <iostream>
using namespace std;
int main()
{
    // Type casting in C++

    // // Implicit type casting -> automatically done by compiler
    // int b = 'a'; // character 'a' has ASCII value 97
    // cout << "Value of b (character 'a' as int): " << b << endl;
    // char ch = 123456; // 123456 is larger than the range of char, so it will wrap around and take a value based on modulo 256 -> 123456 % 256 = 64 -> '@'
    // cout << "Value of ch (int 12345 as char): " << ch << endl;

    // // Explicit type casting -> done by the programmer
    // double d = 3.14;
    // int a = (int)d; // converting double to int, fractional part is discarded
    // cout << "Value of a (double 3.14 as int): " << a << endl;

    // // C-style casting
    // float f = 5.67f;
    // int i = (int)f; // converting float to int, fractional part is discarded
    // cout << "Value of i (float 5.67 as int): " << i << endl;

    // operaor
    int a = 10;
    float b = 20.5;
    cout<<a << " + " << b << " = " << a + b << endl; // Implicit conversion from int to float
    return 0;
}