#include<bits/stdc++.h>
using namespace std;
int main()
{
    int min,max,steps;
    cin>>min>>max>>steps;
    for(int i=min;i<=max;i=i+steps)
    {
        int c = (5.0/9.0)*(i-32);
        cout<<i<<"  "<<c<<endl;
    }
    return 0;
}