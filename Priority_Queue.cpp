// max heap (desending order)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     priority_queue<int> pq;
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int no;
//         cin>>no;

//         pq.push(no);
//     }

//     // Remove the elements from the heap

//     while(!pq.empty())
//     {
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
// }

// min heap (ascending order)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int no;
        cin>>no;

        pq.push(no);
    }

    // Remove the elements from the heap

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}