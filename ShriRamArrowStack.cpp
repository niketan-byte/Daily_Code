#include<bits/stdc++.h>
using namespace std;

void LordRam(int n)
{
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        if(!s.empty() && s.top()>0 && x<0)
        {
            // Collision will take place

            bool flag = true;     // For x, whether we need to insert it or not
            while(!s.empty() && s.top()>0 && x<0)
            {
                if(abs(x)==abs(s.top()))
                {
                s.pop();
                flag = false;
                break;
                }
                else if(abs(x)>abs(s.top()))
                {
                    s.pop();
                    flag = true;
                }
                else if(abs(x)<abs(s.top()))
                {
                    flag = false;
                    break;
                }
                else
                {
                    break;
                }
            }
            if(flag)
            {
               s.push(x); 
            }

        }    
        else{
              // Simply insert the element
              s.push(x);
        }
    }
    stack<int> s1;
    while(!s.empty())
    {
        s1.push(s.top());
        s.pop();
    }
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    LordRam(n);
    return 0;
}