#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    while(cin>>x)
    {
        if(x<3)
        {
            cout<<"Invalid Input"<<endl;
            continue;
        }
        if(x%2!=0)
        {
            cout<<(x*x-1)/2<<"   "<<(x*x+1)/2<<endl;
        }
        else{ 
            cout<<(x*x-4)/4<<"   "<<(x*x+4)/4<<endl;
        }
    }
    return 0;

}