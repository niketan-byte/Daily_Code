#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cliff_end = 10;
    int x = 0;
    do
    {
        x = x+1;
        cout<<"Taking 1 step reaching :"<<x<<endl;
    }while(x < cliff_end);

    cout<<"Final X "<<x<<endl;

    if(x==cliff_end)
    {
        cout<<"We are standing on the cliff"<<endl;
    }
    else if(x>cliff_end)
    {
        cout<<"We are falling down the cliff"<<endl;
    }
    return 0;
}