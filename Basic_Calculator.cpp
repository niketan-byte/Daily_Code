#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    while(1)
    {
        cin>>ch;
        if(ch=='x' || ch=='X')
            break;
        
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            int a,b;
            cin>>a>>b;
            switch(ch)
            {
                case '+':
                    cout<<a+b<<endl;
                    break;
                case '-':
                    cout<<a-b<<endl;
                    break;
                case '*':
                    cout<<a*b<<endl;
                    break;
                case '/':
                    cout<<a/b<<endl;
                    break;
            }
        }
        
        else{
            cout<<"Invalid Operation. Try again."<<endl;
        }
    }
    return 0;
}