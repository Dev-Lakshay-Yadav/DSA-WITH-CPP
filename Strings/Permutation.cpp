// Permutation in string  - 567

#include <iostream>
using namespace std;

bool permutationExists(string s1, string s2)
{
    if (s1.length() > s2.length())
        return false;
    for (int i = 0; i <= s2.length() - s1.length(); i++)
    {
        int freqArr[26] = {0};
        int freqArr2[26] = {0};

        for (int k = 0; k < s1.length(); k++)
        {
            freqArr[s1[k] - 'a']++;
        }

        for (int k = i; k < i + s1.length(); k++)
        {
            freqArr2[s2[k] - 'a']++;
        }

        bool same = true;
        for (int k = 0; k < 26; k++)
        {
            if (freqArr[k] != freqArr2[k])
            {
                same = false;
                break;
            }
        }
        if (same)
            return true;
    }
    return false;
}

int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    bool ans = permutationExists(s1, s2);
    if (ans)
        cout << "Yes exists";
    else
        cout << "Not exists";
    return 0;
}
