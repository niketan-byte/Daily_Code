#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime"<<endl;
            return 0;
        }
      
       
    }
    cout<<"Prime"<<endl;
    return 0;
}