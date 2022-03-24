#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[] = "abcdefcghijkzyxz";
    int n = strlen(a);
    int curr_len = 1;
    int max_len =1;

    int visited[256];
    for(int i=0;i<256;i++)
    {
        visited[i] = -1;
    }

    visited[a[0]]=0;
    for(int i=1;i<n;i++)
    {
        int last_occ = visited[a[i]];

        // Expansion 
        if(last_occ==-1 || i-curr_len>last_occ)
        {
            curr_len++;
            // max_len = max(max_len,curr_len);
        }

        // Expansion + Contraction
        else
        {
               
            if(curr_len>max_len)
            {
                max_len = curr_len;
            }
             curr_len = i-last_occ;
        }
        
            visited[a[i]]=i;
    }
     if(curr_len>max_len)
        {
            max_len = curr_len;
        }
    
    cout<<max_len<<endl;
    return 0;
}