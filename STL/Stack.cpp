// Non sequential container

#include<iostream>
#include<stack>

using namespace std;

void display (stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main ()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    display(s);


    s.emplace(40);
    display(s);

    s.pop();
    display(s);

    stack<int> s1;
    s1.push(100);
    s1.push(200);
    s1.push(300);
    display(s1);

    s.swap(s1);
    display(s);

    // empty is used to check whether the stack is empty or not
    s.empty() ? cout << "Stack is empty" << endl : cout << "Stack is not empty" << endl;

    return 0;
}