#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    // character array
    // \n and \0  both are counted as single charater and both takes 1 byte space in memory
    char str1[] = {'a', 'b', 'c'};
    char str2[] = {'a', 'b', 'c', '\0'}; // \0 is null characer - 0 is ascii - 1 byte space
    int arr[] = {1, 2, 3};

    cout << arr << endl; // this return the address of first index value of the array

    // in case of charcter cpp cout bydefault deals the array as an string
    cout << str1 << endl; // this returns the whole arrays as string but null value not defined so sometimes it prints some extra characters also after the abc
    cout << str2 << endl; // this returns the whole array value as an string abc

    // this is also possible
    char str3[] = "hello";
    cout << strlen(str3) << endl;
    cout << str3[2] << endl;

    char str4[100];
    cout << "enten the string " << endl;
    // if i enter hello ji string then this only output the hello because cin ignores the space
    // cin>>str4;

    // so for space we have an another option which is cin.getline(str,len,delim?)
    // stringname, length of string we want to enter
    // cin.getline(str4,100);

    // delim -> basically a delemiter function -> so when we do not use delemiter so during input if we press enter then getline stops taking input that means enter is boundation that means we can't add next line to avoid this we use delemiter we assing an ending character by themself.

    // cin.getline(str4,100,'$');    // now $ is ending element
    // cout<<"Output : "<<str4<<endl;

    // Now let's start stings  -> this is not an primitive datatype actually this is an class whose objects we are defining
    // 1-> char array have fixed size but string have variable size -> dynamic in nature, resizes during run time
    // data store is same contiguous in nature just like char array
    string s1 = "hello this is string";
    string s2 = "yes I know this is string";
    string s3 = "hello this is string";
    string s4 = "lakshay";
    string s5 = "yadav";

    cout << s1 << endl;

    // concatination
    cout << s1 + s2 << endl;

    // comparison
    cout << (s1 == s3) << endl; // boolen output

    cout << (s4 > s5) << endl; // gives flase because chronologically Y comes after L so y is larger not comparing length

    // if compare length
    cout << (s4.length() > s5.length()) << endl; // yes true

    // if we want custom string input
    string s6;

    // cin>>s6;  // same work like char array space issue

    // But getline is different in strings
    // getline(cin,s6);  // optional delemiter is also allowed

    // cout << s6 << endl;

    // Iterate over a string
    string s7 = "lakshay yadav";
    for (int i = 0; i < s7.length(); i++)
    {
        cout << s7[i] << " ";
    }
    cout << endl;
    for (char ch : s7)
    {
        cout << ch << " ";
    }
    cout << endl;

    // Reverse a string

    // char array version
    char ch[] = {'h', 'e', 'l', 'l', 'o'};
    cout << "Original char array : " << ch << endl;
    int st = 0, end = sizeof(ch) / sizeof(ch[0]) - 1;
    while (st < end)
    {
        swap(ch[st], ch[end]);
        st++;
        end--;
    }
    cout << "Reversed char array : " << ch << endl;

    string s8 = "hello";

    cout << "Original string : " << s8 << endl;
    reverse(s8.begin(), s8.end()); // these begin and end returns the iterators
    cout << "Reversed string : " << s8 << endl;

    return 0;
}