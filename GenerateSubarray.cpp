#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   // Generate all subarray using 3 nested loops

   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           for(int k=i;k<=j;k++)
           {
               cout<<a[k]<<" ";
           }
          cout<<endl;
       }
        
   }
    return 0;
}