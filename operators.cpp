#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Comma Operator
    int a, b, c;

    // Assignment Operator
    a = 10;
    b = 20;
    c = 30;

    // Logical Operator
    if (c > a and c > b)
    {
        cout << "c is greater than a and b" << endl;
    }
    else
    {
        cout << "c is not greater than a and b" << endl;
    }

    // Ternary Operator
    int x = c % 2 == 0 ? 1 : 0;
    cout << x << endl;
    c % 2 == 0 ? cout << "Even\n" : cout << "Odd\n";

    // Bitwise Operator
    x = 5;
    int y = 7;
    cout << "AND Operator: " << (x & y) << endl;
    cout << "OR Operator: " << (x | y) << endl;
    cout << "XOR Operator: " << (x ^ y) << endl;
    cout << "NOT Operator: " << (~x) << endl;

    // Shift Operator
    cout << "Left Shift Operator: " << (x << 2) << endl;
    cout << "Right Shift Operator: " << (x >> 2) << endl;

    // Unary Operator
    //  Address
    cout << "Address of x: " << (&x) << endl;

    // Post Increment / Decrement
    a = 10;
    int z = a++;
    cout << z << endl;
    z = ++a;
    cout << z << endl;

    // Compound Assignment Operator
    a = 10;
    a *= 3;
    cout << "A after multiplication: " << a << endl;
    a %= 5;
    cout << "A after modulo: " << a << endl;

    b = 5;
    b <<= 1;
    cout << "B after left shift: " << b << endl;
    return 0;
}