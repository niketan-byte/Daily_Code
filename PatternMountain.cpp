#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
  int k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {   
            if(j>i && j<2*n-i)
            cout<<" ";
            else{
              
                if(j<n)
                {
                k=j;
                cout<<k;
                }
                else{
                    k=2*n-j;
                    cout<<k;
                }

            }
        }
        
     
        cout<<endl;
    }
    return 0;
}