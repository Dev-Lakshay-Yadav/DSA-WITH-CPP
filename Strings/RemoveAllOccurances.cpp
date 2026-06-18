#include <iostream>
using namespace std;

void removeAllOccurance(string &s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        int index = s.find(part);
        s.erase(index, part.length());
    }
}
int main()
{
    string s = "daabcbaabcbc", part = "abc";
    cout << "Before string : " << s << endl;
    removeAllOccurance(s, part);
    cout << "After string : " << s << endl;

    return 0;
}