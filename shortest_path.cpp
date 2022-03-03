#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();

    int x=0;
    int y=0;

    while(ch!='\n')
    {
        if(ch=='N' or ch=='n')
        {
            y++;
        }
        else if(ch=='S' or ch=='s')
        {
            y--;
        }
        else if(ch=='E' or ch=='e')
        {
            x++;
        }
        else
        {
            x--;
        }
        ch = cin.get();
    }
    
    cout<<"Final Displacement is "<<x<<" "<<y<<endl;
    if(x>=0)
    {
        for(int i=0;i<x;i++)
        {
            cout<<"E";
        }
    }
    if (x<0)
    {
        for(int i=0;i<abs(x);i++)
        {
            cout<<"W";
        }
    }
     if (y>=0)
    {
        for(int i=0;i<y;i++)
        {
            cout<<"N";
        }
    }
     if (y<0)
    {
        for(int i=0;i<abs(y);i++)
        {
            cout<<"S";
        }
    }
    return 0;
}