#include<iostream>
#include<vector> 

using namespace std;


int main ()
{ 
    pair <int, char> PAIR1; // pair of int and char
    pair <int, char> PAIR2 (100, 'A'); // pair of int and char
    pair <int, char> PAIR3 (PAIR2); // copy of PAIR2

    cout << "PAIR1: " << PAIR1.first << " " << PAIR1.second << endl;
    cout << "PAIR2: " << PAIR2.first << " " << PAIR2.second << endl;
    cout << "PAIR3: " << PAIR3.first << " " << PAIR3.second << endl;

    // Pair of pair of int and char
    pair <int, pair <int, char> > PAIR4 (10, {100, 'A'});
    cout << "PAIR4: " << PAIR4.first << " " << PAIR4.second.first << " " << PAIR4.second.second << endl;

    vector<pair <int, int> > vec = { {1, 2}, {3, 4}, {5, 6} }; // vector of pair of int and int
    vec.push_back({10, 20});
    cout << "vec: ";
    for (auto &p : vec) {
        cout << p.first << " " << p.second << " ";
    }
    cout << endl;

    vec.emplace_back(200, 'B'); // emplace_back for pair
    cout << "vec after emplace_back: ";
    for (auto &p : vec) {
        cout << p.first << " " << p.second << " ";
    }
    cout << endl;

    // Push_back vs Emplace_back -> push_back creates a temporary pair object and then moves it into the vector, while emplace_back constructs the pair object in place, avoiding the need for a temporary object and potentially improving performance.     

    return 0;
}