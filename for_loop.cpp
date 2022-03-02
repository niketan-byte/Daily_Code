#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cliff_end = 10;
    // int x;
    // for(x=0;x<cliff_end;x++)
    // {
    //     cout<<"Taking 1 step reaching :"<<x+1<<endl;
    // }

    // both are same

    int x=0;
    for(;x<cliff_end;)
    {
        x = x+1;
        cout<<"Taking 1 step reaching :"<<x<<endl;
    }
    cout<<"Final X "<<x<<endl;
    return 0;
}