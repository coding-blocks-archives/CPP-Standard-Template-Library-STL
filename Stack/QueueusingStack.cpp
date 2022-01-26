#include <iostream>
#include <stack>
using namespace std;

template <typename T>
class Queue
{
    stack<T> s1, s2;

public:
    void push(T item)
    {
        s1.push(item);
    }
    void pop()
    {
        if (!s1.empty())
        {
            while (s1.size() >= 1)
            {
                T item = s1.top();
                s2.push(item);
                s1.pop();
            }
        }

        s2.pop();
    }
    T front()
    {
        if (!s1.empty())
        {
            while (s1.size() >= 1)
            {
                T item = s1.top();
                s2.push(item);
                s1.pop();
            }
        }

        T element = s2.top();
        return element;
    }
    int size()
    {
        return s1.size() + s2.size();
    }
    bool empty()
    {
        return size() == 0;
    }
};

void display(Queue<int>& q){
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    Queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    display(q);

    q.push(5);
    q.push(6);

    display(q);
}