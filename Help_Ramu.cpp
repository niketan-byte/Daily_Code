#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c1,c2,c3,c4;
        cin>>c1>>c2>>c3>>c4;
        int n,m;
        cin>>n>>m;
        int r[n],c[m];
        for(int i=0;i<n;i++)
        {
            cin>>r[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>c[i];
        }
        int rcost=0;
        int ccost=0;

        for(int i=0;i<n;i++)
        {
            rcost+=min(r[i]*c1,c2);
        }
        rcost = min(rcost,c3); 

        for(int i=0;i<m;i++)
        {
            ccost+=min(c[i]*c1,c2);
        }
        ccost = min(ccost,c3);

        int ans = min(c4,rcost+ccost);   
        cout<<ans<<endl;    
    }
    return 0;

}