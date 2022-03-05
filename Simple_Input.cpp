#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int sum=0;
    while(1)
    {   
        int n;
        cin>>n;
        sum+=n;
        if(sum>=0)
        {
            cout<<n<<" ";
        }
        else{
            break;
        }
    }
    return 0;
}