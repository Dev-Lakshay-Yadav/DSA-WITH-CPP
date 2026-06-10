// Non Sequence Container Adapter

#include<iostream>
#include<queue>

using namespace std;

void display(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main ()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    display(q);

    q.pop();
    display(q);

    q.emplace(200);
    display(q);

    q.front() = 300;
    display(q);

    q.back() = 100;
    display(q);

    return 0;
}