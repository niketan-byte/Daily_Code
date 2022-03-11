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

void printPrime(int n)
{

        for(int i=2;i<=n;i++){
            if(isPrime(i)){
                cout<<i<<" ";
            }
        }
}

int main()
{
    int n;
    cin>>n;

    printPrime(n);
    return 0;
}