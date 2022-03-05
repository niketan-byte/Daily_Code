#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    
    float d=b*b-4*a*c;
    if(d>0)
    {
        float x1=(-b-sqrt(d))/(2*a);
        float x2=(-b+sqrt(d))/(2*a);
        cout<<x1<<" "<<x2;
    }
    else if(d==0)
    {
        float x1=(-b+sqrt(d))/(2*a);
        cout<<x1<<" "<<x1;
    }
    else
    {
        cout<<"No real roots";
    }
    return 0;
}