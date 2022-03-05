#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int n;
    cin>>n;
    unsigned long int ans=0,power=1;
    while(n!=0)
    {
        int d = n%10;
        ans += d*power;
        power = power*2;
        n = n/10;
    }
    cout<<ans;

    return 0;
}