// Reverse Words - 151

// #include <iostream>
// using namespace std;

// void stringReverse(string &s)
// {
//     int i = 0, j = s.length() - 1;

//     while (i < j)
//     {
//         swap(s[i], s[j]);
//         j--;
//         i++;
//     }
// }

// int main()
// {
//     string s = "the sky is blue";

//     cout << "original string : " << s << endl;
//     stringReverse(s);
//     cout << "Full reverse string : " << s << endl;

//     string temp, ans;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == ' ' && !temp.empty())
//         {
//             stringReverse(temp);
//             ans += temp + ' ';
//             temp.clear();
//         }
//         else if (s[i] == ' ')
//         {
//             continue;
//         }
//         else
//         {
//             temp.push_back(s[i]);
//         }
//     }
//     // Process last word
//     if (!temp.empty())
//     {
//         stringReverse(temp);
//         ans += temp;
//     }

//     if (!ans.empty() && ans.back() == ' ')
//         ans.pop_back();
//     cout << "Final reverse string : " << ans << endl;
//     return 0;
// }



//   both are same in complexity and same logic but this second is is more readable and good code quality

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "the sky is blue";
    int n = s.length();

    reverse(s.begin(), s.end());

    string ans,word;
    for (int i = 0; i < n; i++)
    {
        word.clear();
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());

        if (word.length() > 0)
        {
            ans += " " + word;
        }

        ans.substr(1);   // removing first space
    }
    return 0;
}