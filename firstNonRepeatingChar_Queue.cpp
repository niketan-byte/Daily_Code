#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<char> q;
    int freq[27]={0};

    // running stream of characters until . is encountered (EOF)

    char ch;
    cin>>ch;

    while(ch!='.')
    {
        // logic

        // insert into queue and update frequency table
        q.push(ch);
        freq[ch-'a']++;

        // Query part
        while(!q.empty())
        {
            int idx = q.front()-'a';
            if(freq[idx]>1)
            {
               q.pop(); 
            }
            else{
                cout<<q.front();
                break;
            }
        }
        // queue is empty()
        if(q.empty())
        {
            cout<<"-1"<<endl;}
            cin>>ch;
   
    }

    return 0;
}