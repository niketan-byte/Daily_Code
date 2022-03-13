#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
    return a>b;   // Just change to a<b to sort in descending order
}


void BubbleSort(int a[],int n,bool (&cmp)(int a,int b))
{
    for(int i=1;i<=n-1;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            if(cmp(a[j],a[j+1]))
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    BubbleSort(a,n,compare);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}