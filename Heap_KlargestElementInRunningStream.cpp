#include <iostream>
#include <cstdio>
#include<queue>
#include<vector>
using namespace std;

void query(priority_queue<int,vector<int>,greater<int>> pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main()
{
    int n;
    // To find largest k numbers (at any query point) (if there is -1 at that time we make queue empty)
    
    priority_queue<int,vector<int>,greater<int>> pq;
    int s=0;
    int k=3;

    while (scanf("%d", &n) != EOF)
    {
        if(n==-1)
        {
            query(pq);
        }
        // cout << n << endl;
        else if(s<k) 
        {
          pq.push(n);
          s++;
        }  

        else{
            if(n>pq.top())
            {
                pq.pop();
                pq.push(n);
            }
        } 
    }

    return 0;
}