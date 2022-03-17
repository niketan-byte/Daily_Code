#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    int a[100000];
    int k;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;

    // we have to process first k element separately

    deque<int> Q(k);
    int i;
// sliding window for first k element
    for(i=0;i<k;i++)
    {
        while(!Q.empty() && a[i]>a[Q.back()])
        {
            Q.pop_back();
        }
        Q.push_back(i); 
    }

    // Process the remaining elements
    
    for(;i<n;i++)
    {
        cout<<a[Q.front()]<<" ";

          // 1) Remove the elements which are out of sliding window(Contraction)
             
        while((!Q.empty() && (Q.front() <= i-k)))
        {
            Q.pop_front();
        }

          // 2) Remove the elements which are not useful and are in window
          while(!Q.empty() && a[i]>=a[Q.back()])
          {
              Q.pop_back();
          }
          
          // 3) Add the new element (Expansion)
         Q.push_back(i);
        
    }
    cout<<a[Q.front()]<<" ";
    return 0;
}