// string compression -- leetcode - 443

#include <iostream>
using namespace std;

int main()
{
    char ch[] = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int n = sizeof(ch) / sizeof(ch[0]);
    string ans;
    int freq = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i<n && (ch[i] == ch[i-1]))
        {
            freq++;
        }
        else
        {
            ans += ch[i-1];
            if (freq > 1)
            {
                ans += to_string(freq);
            }
            freq = 1;
        }
    }

    cout << ans << " " << ans.length() << endl;
    return 0;
}