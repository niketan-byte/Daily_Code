#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
   int a=0;
    int b=1;
    int c;

    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        cout<<a;
        return 1;
    }
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=1;i<=n-2;i++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
   return 0; 
}

int main()
{
    int n;
    cin>>n;
    fib(n);


    return 0;
}