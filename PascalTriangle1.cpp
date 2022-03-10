#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++)
    {k++;
        for(int j=1;j<=2*n-1;j++)
        {  
            if(j>=n-i+1 && j<=n+i-1)
            {
                if((i%2==0 && j%2!=0)|| (i%2!=0 && j%2==0))
                {   
                    if(j==n-i+1 || j==n+i-1)
                    {
                    cout<<"1";
                    }
                    else{
                        cout<<k-1;
                    }
                }
                else{
                    cout<<" ";
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