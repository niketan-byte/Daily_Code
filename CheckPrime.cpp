#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{  
    int i;
    for( i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
 
    return true;
   
}

int main()
{
    int n;
    cin>>n;

    cout<<boolalpha<<isPrime(n);
    return 0;
}