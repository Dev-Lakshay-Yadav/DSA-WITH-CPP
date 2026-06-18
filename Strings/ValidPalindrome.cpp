#include <iostream>
using namespace std;

bool isAlphaNumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        return true;
    return false;
}

int main()
{
    // Valid Palindrome or not  - 125 leet
    string s9 = "ni@ti$n";

    int start = 0, ending = s9.length() - 1;
    bool ans = true;
    while (start < ending)
    {
        if (!isAlphaNumeric(s9[start]))
        {
            start++;
        }
        else if (!isAlphaNumeric(s9[ending]))
        {
            ending--;
        }
        else if (tolower(s9[start]) != tolower(s9[ending]))
        {
            ans = false;
            break;
        }
        else
        {
            start++;
            ending--;
        }
    }

    cout << (ans ? "Valid Palindrome" : "Not a valid palindrome") << endl;
    return 0;
}