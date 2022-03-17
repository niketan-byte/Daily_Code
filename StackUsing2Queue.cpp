#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack
{
    queue<int> q1, q2;

public:
    void push(int x) // Always push the element in the q1
    {
        q1.push(x);
    }
    void pop()
    {

        // remove the last added element from q1
        // we have to move first n-1 element in q2
        // interchange the names of q1 and q2

        if (q1.empty())
        {
            return;
        }
        while (q1.size() > 1)
        {
            int x = q1.front();
            q2.push(x);
            q1.pop();
        }

        // remove the last element
        q1.pop();

        // swap the name of q1 and q2
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    int top()
    {
        while (q1.size() > 1)
        {
            int x = q1.front();
            q2.push(x);
            q1.pop();
        }

        // remove the last element and show it
        int x = q1.front();
        q1.pop();
        q2.push(x);

        // swap the name of q1 and q2
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
        return x;
    }

    int size()
    {
        return q1.size() + q2.size();
    }
    bool empty()
    {
        return size() == 0;
    }
};

int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}