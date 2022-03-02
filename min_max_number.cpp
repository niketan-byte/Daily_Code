#include<bits/stdc++.h>
using namespace std;
int main()
{
    int min = INT_MAX;
    int max = INT_MIN;

    int n;
    cin >> n;
    int no;
    // without storing all the numbers, based upon the current number
    for(int i=0;i<n;i++)
    {
  cin>>no;
  if(no<min)
  {
min = no;
  }
  if(no>max)
  {
      max = no;
  }
 
    }
     cout<<"Max is "<<max<<endl;
    cout<<"Min is "<<min<<endl;
    return 0;
}