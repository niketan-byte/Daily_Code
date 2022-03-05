#include <bits/stdc++.h>
using namespace std;
int main ()
{
    unsigned long long int i;
    int n;
    cin >> n;
    while(n--)
    {
        int a;
        cin>>a;
        int sum =0;
        while(a!=0)
        {
            sum = sum + a%10;
            a = a/10;
        }
        if((sum%2!=0 && sum%3==0)||(sum%2==0 && sum%4==0))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}