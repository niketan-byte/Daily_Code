// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     stack<int> s1,s2;
    
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {   int a;
//         cin>>a;
//         s1.push(a);
//     }

//     int x;
//     int k=1;
//     while(k!=n)
//     {
//         // pick the top element from s1 at top and insert it at the bottom
//         x=s1.top();
//         s1.pop();

//         // transfer n-k-1 elements from s1 to s2
//         for(int i=n-k;i>0;i--)
//         {
//             s2.push(s1.top());
//             s1.pop();
//         }

//       // insert the element x in s1
//         s1.push(x);

//         // transfer n-k-1 elements from s2 to s1
//         for(int i=n-k;i>0;i--)
//         {
//             s1.push(s2.top());
//             s2.pop();
//         } 

//         k++;
//     }
//     while(!s1.empty())
//     {
//         cout<<s1.top()<<" ";
//         s1.pop();
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

void transfer(stack<int> &s1,stack<int>&s2,int n)
{
    for(int i=0;i<n;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}

void reverseStack(stack<int> &s1)
{
    // helper stack
  stack<int> s2;

  int n = s1.size();

  for(int i=0;i<n;i++)
  {
      // pick the element at top & insert it at the bottom
      int x = s1.top();
      s1.pop();

      // transfer n-i-1 element from stack s1 into s2
      transfer(s1,s2,n-i-1);

      // insert the element x in s1
      s1.push(x);

      // transfer n-i-1 elements from s2 to s1
      transfer(s2,s1,n-i-1);
  }
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