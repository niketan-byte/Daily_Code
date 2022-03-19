#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(temp);
}

void reverseStack(stack<int> &s1)
{

// base case
if(s1.empty())
{
    return;
}

// recursive case
// pop out the top element and insert it at the bottom of reversed smaller stack
int x=s1.top();
s1.pop();
reverseStack(s1);
insertAtBottom(s1,x);

}




int main()
{
    stack<int> s;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {   int a;
        cin>>a;
        s.push(a);
    }

   reverseStack(s);


    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}