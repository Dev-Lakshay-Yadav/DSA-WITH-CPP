// Non Sequence Container Adapter

#include<iostream>
#include<queue>

using namespace std;

void display(priority_queue<int> pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main ()
{
    // In priority queue, the largest element is given the highest priority and is removed first.
    // By default, the priority queue in C++ is implemented as a max-heap, which means that the largest element will be at the top of the queue. If you want to create a min-heap (where the smallest element has the highest priority), you can use a custom comparator or specify a different container type.

    priority_queue<int> pq;
    pq.push(10);     // O log(n) time
    pq.push(20);
    pq.push(30);
    display(pq);

    pq.pop();    // O log(n)  time
    display(pq);

    pq.emplace(200);
    display(pq);

    cout<<"top in pq : "<<pq.top();

    return 0;
}