#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a;
    cin>>t;
    a=0;
    while(t--)
    {
       a++;
       string s,res="";
       cin>>s;

       for(int i=0;i<s.length()-1;i++)
       {
           if(s[i]>s[i+1])
           {
               res+=s[i];
           }
           else{
                res+=s[i];
                res+=s[i];
           }
       }
       res+=s[s.length()-1];
       for(int i=0;i<res.length();i++)
    {
        cout<<res[i];
    }

    }
    
    return 0;
}