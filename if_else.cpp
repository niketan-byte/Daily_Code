#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Program to check if a number is divisible by 2, divisible by 3 and both
    // if else-if else

    // if (n % 2 == 0)
    // {
    //     cout << n << " is divisible by 2" << endl;
    //     cout << "If block!" << endl;
    // }

    // //     8 is divisible by 2
    // // If block!
    // // 8 is not divisible by 2
    // // Else block!

    // // If-else block is independent of the above if blocks
    // if (n % 3 == 0)
    // {
    //     cout << n << " is divisible by 3" << endl;
    //     cout << "If block!" << endl;
    // }
    // else
    // {
    //     cout << n << " is not divisible by 2" << endl;
    //     cout << "Else block!" << endl;
    // }

  if (n % 2 == 0 && n % 3 == 0)
    {
        cout << n << " is divisible by 2 and 3" << endl;
        cout << "If block!" << endl;
    }

    // else if block if you want only one of the blocks is executed
     else if (n % 2 == 0)
    {
       cout << n << " is divisible by 2" << endl;
        cout << "Else If block!" << endl;
    }
    
    else if (n % 3 == 0)
    {
       cout << n << " is divisible by 3" << endl;
        cout << "Else If block!" << endl;
    }
    else
    {
        cout << n << " is not divisible by 2" << endl;
        cout << "Else block!" << endl;
    }

    return 0;
}