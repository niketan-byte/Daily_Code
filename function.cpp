#include<bits/stdc++.h>
using namespace std;

void sayHello()
{
    cout<<"Hello Everyone!  Function call"<<endl;

}

int factorial(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}

int main()
{
    cout<<" Before Function Call "<<endl;

    sayHello();

    cout<<"After Function Call !"<<endl;

    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
    return 0;
}