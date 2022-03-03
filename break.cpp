#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Break statement - used to break/stop out of a loop based on a condition
    
    // Problem Statement: Read a stream of numbers until you get a multiple of 7.

    int n;
    while(1)
    {
        // No stopping condition as of now
        cin>>n;
        if(n%7==0)
        {
            // Stop processing more numbers
         
        //   break;     // take you out of the loop
       
        continue;  // take you to the next iteration of the loop, by skipping this one  
        }
        cout<<"No "<<n<<endl;
    }
    cout<<"Came out of the loop"<<endl;
 
    return 0;
}