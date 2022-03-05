#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ans="";
    int power=1;
    while(n!=0)
    {
       int r = n%8;
       n = n/8;
       char c = r+'0';
       ans = c+ans;
    }
    cout<<ans;
    return 0;
}


