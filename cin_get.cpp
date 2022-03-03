#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Problem - Read a list of characters (sentence)
    // cin.get() -> reads a single character

    char ch;
//     cin>>ch;   // cin not able to read space and new line character
//    while(ch!='.')
//    {
//        // Print the last character that we have read
//        cout<<ch;
  
//        // Update my char in the memory (read the next character)
//        cin>>ch;
//    }

   ch = cin.get();  // this method reads any single char including spaces/newline
while(ch!='.')
{
    cout<<ch; 
    ch = cin.get();
}
    return 0;
}