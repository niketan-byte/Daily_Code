#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++)
    {   k=i;
        for(int j=1;j<=2*n;j++)
        {
            if(j>=n-i+1 && j<=n+i-1)
            {
              if(j<=n)
              {  
                  cout<<k;
                  k++;
              }
              if(j>n){
                  k--;
                  cout<<k-1;
                    
              }
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}