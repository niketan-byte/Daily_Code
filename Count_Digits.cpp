#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    while(n!=0)
    {
        
      if(n%10==m)
      {
          cnt++;
      }
      n=n/10;
    }
    cout<<cnt;
    return 0;
}