#include <bits/stdc++.h>
using namespace std;
int main()

{
    int f = 0;
    int c;
    while (f <= 300)
    {

        c = (5.00/9.00)*(f - 32);
        cout << f << "  -->  " << c << endl;
        f = f + 20;
    }
    return 0;
}