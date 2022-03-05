#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    while(n--)
    {
        int a;
        cin>>a;

        int ans=0;
        int power = 1;
        
        while(a!=0)
        {
            int d;
            d = a%10;
            a = a/10;
            ans +=  d*power;
            power = power*2;
            
        }
        
        
         cout<<ans<<endl;

         ans=0;
         power=1;
    }
    return 0;
}