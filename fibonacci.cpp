#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fib=0,fib1=1,fib2=0,temp;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<fib<<" ";
            fib2=fib1+fib;
            temp=fib1;
            fib1=fib;
            fib=fib2;

        }
        cout<<endl;
    }
    return 0;
}