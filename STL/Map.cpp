// Non Sequential Container

#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

void display(map<string, int> m)
{
    for (auto p : m)
    {
        cout << p.first << " : " << p.second << endl;
    }
}

void display2(multimap<string, int> m2)
{
    for (auto p : m2)
    {
        cout << p.first << " : " << p.second << endl;
    }
}

void display3(unordered_map<string, int> m2)
{
    for (auto p : m2)
    {
        cout << p.first << " : " << p.second << endl;
    }
}

int main()
{
    map<string, int> m;

    m["TV"] = 12;
    m["Mobile"] = 13;
    m["Laptop"] = 16;
    m["Tablet"] = 34;
    m["PC"] = 24;
    // m["PC"] = 24;    not created twice if already exists

    m.insert({"Camera", 26});
    m.emplace("Speaker", 86);

    display(m); // bydefault elements in map are stored in sorted ascending order on the basis of key

    cout << "count of key : " << m.count("Laptop") << endl;
    cout << "vlaue of key : " << m["Laptop"] << endl;

    m.erase("TV");
    display(m);

    if (m.find("Camera") != m.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    cout << "#@#@#@#@#@#@#@#@#@#@#@#@" << endl;
    cout << "        Multi Map       " << endl;
    cout << "#@#@#@#@#@#@#@#@#@#@#@#@" << endl;
    // Multi map -> able to store multiple keys basically key dublicacy allowed
    // we have to use insert to insert data [] not work here

    multimap<string, int> m2;

    m2.insert({"Santro", 22});
    m2.insert({"Alto", 11});
    m2.emplace("WagonR", 45);
    m2.emplace("WagonR", 45);
    m2.emplace("Tiago", 85);
    m2.emplace("Tiago", 45);

    display2(m2);

    m2.erase("WagonR"); // all occurances gets deleted
    display2(m2);

    m2.erase(m2.find("Tiago")); // iterator will delete first occurance only
    display2(m2);

    cout << "#@#@#@#@#@#@#@#@#@#@#@#@" << endl;
    cout << "      Unordered Map       " << endl;
    cout << "#@#@#@#@#@#@#@#@#@#@#@#@" << endl;

    // Duplicasy not allowed

    unordered_map<string, int> m3;

    m3.insert({"I10", 22});
    m3.insert({"I20", 11});
    m3.emplace("Verna", 45);
    m3.emplace("Venue", 45);
    m3.emplace("Scorpio", 85);
    m3.emplace("Thar", 45);

    display3(m3);

    // unordered vs ordered map
    // time complexity for insert,erase, count in ordered map is O(logn)
    // time complexity for insert,erase, count in unordered map is O(1)  rarely go to O(n)(only in case of any collision)

    return 0;