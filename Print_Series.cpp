#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int cnt=0,n=0;
    while(cnt!=n1)
    {
        n++;
        if(((3*n+2)%(n2))!=0)
        {
            cout<<3*n+2<<endl;
            cnt++;
        }
        else
        {

            continue;
        }
    }
    return 0;
}