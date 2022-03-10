#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int k=0;
     for(int i=1;i<=n;i++)
     {   
         for(int j=1;j<=n+1-i;j++)
         {
            cout<<j<<" ";
         }
         for(int j=n+2-i;j<=n+i-2;j++)
         {
             cout<<"* ";
         }
       k++;
         
         cout<<endl;
     }
   return 0;
}