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
    int key;
    cin>>key;

    int st,end;
    st=0;
    end = n-1;

    while(st<=end)
    {
        int mid = (st+end)/2;
        if(a[mid]==key)
        {
            cout<<"Element found at index "<<mid<<endl;
            break;
        }
        else if(a[mid]>key)
        {
           end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    if(st>end)
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}