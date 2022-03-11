#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    a=5;
    long long int f;
    int count=0;
    while(1)
    {
        f = floor(n/a);
        count += f;
        a=a*5;
        if(f<1)
        {
            break;
        }
    }
    cout<<count;
    return 0;
}