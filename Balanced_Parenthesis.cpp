#include <bits/stdc++.h>
using namespace std;

bool isValidExp(char *s)
{
    stack<char> s1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s1.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (s1.empty() || ((ch == ')' && s1.top() != '(') || (ch == '}' && s1.top() != '{') || (ch == ']' && s1.top() != '[')))
            {
                return false;
            }
            // else if (!s1.empty() && ((ch == '(' && s1.top() == ')') || (ch == '{' && s1.top() == '}') || (ch == '[' && s1.top() == ']')))
            //     {
            //         s1.pop();
            //         return true;
            //     }
            else
            {
                s1.pop();
            }
        }
       
    }

    return s1.empty();
}

int main()
{
    char s[100] = "{(a+b)+(c-d+f]  }";
    if(isValidExp(s))
    {
        cout<<"Valid Expression";
    }
    else
    {
        cout<<"Invalid Expression";
    }
    return 0;
}