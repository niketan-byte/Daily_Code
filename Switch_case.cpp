#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Switch Case
    /* Design a Menu - where pressing a button gives you the corresponding item

    B - Burger
    M - Maggi
    P - Pizza
    C - Coke
    D - Dosa
    .
    .
    .
    and so on!
    */

    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'b':
    case 'B':
        cout << "Burger" << endl;
        break;

    case 'm':
    case 'M':
        cout << "Maggi" << endl;
        break;

    case 'p':
    case 'P':
        cout << "Pizza" << endl;
        break;

    case 'c':
    case 'C':
        cout << "Coke" << endl;
        break;

    case 'd':
    case 'D':
        cout << "Dosa" << endl;
        break;
    default:
        cout << "Item not available!" << endl;
    }
}