#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int p;
    cin>>p;

    float ans=0;
    float inc=1.0;
// float y=1.0;
// float c=1.0;

    while(p--){
        while(ans*ans<=n)
    {
        ans=ans+inc;
    }

    ans=ans-inc;                // ans = ans-1;
    inc = inc/10;              
                         // ans = ans+0.1;
    
    // while(ans*ans<=n)
    // {
    //     ans=ans+0.1;
    // }
    // ans=ans-0.1;
    // ans=ans+0.01;
    // while(ans*ans<=n)
    // {
    //     ans=ans+0.01;
    // }
    // ans=ans-0.01;
    // ans=ans+0.001;
    // while(ans*ans<=n)
    // {
    //     ans=ans+0.001;
    // }
    // ans=ans-0.001;
   

    }
 cout<<ans;
    return 0;
    }