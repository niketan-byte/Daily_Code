#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==1)
            {
                cout<<i;
            }
            else if(i==j || j==1)
            {  
                cout<<i-1;
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}