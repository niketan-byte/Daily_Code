#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    k=((n+1)/2)+1;

   
    for(int i=1;i<=n;i++)
    {
        if(i<=(n+1)/2)
    {
        k--;
       
    }
     if(i>(n+1)/2)
    {
        k++;
        
    }
        for(int j=1;j<=n;j++)
        {
            if(j<=k || j>=n-k+1)
            {
          cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
   
    }
    return 0;
}