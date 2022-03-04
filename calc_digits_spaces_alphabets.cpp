/* Write a program to calculate digits, whitespaces, alphabets and other characters terminated by $ */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int digits = 0;
    int spaces = 0;
    int alphabets = 0;
    int others = 0;

    char ch;
    ch = cin.get();
    while (ch != '$')
    {
        if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if (ch == ' ' or ch == '\n' or ch == '\t')
        {
            spaces++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            alphabets++;
        }
        else
        {
            others++;
        }
       ch = cin.get();
    }

    cout<<"Digits: "<<digits<<endl;
    cout<<"Spaces: "<<spaces<<endl;
    cout<<"Alphabets: "<<alphabets<<endl;
    cout<<"Others: "<<others<<endl;

    return 0;
}