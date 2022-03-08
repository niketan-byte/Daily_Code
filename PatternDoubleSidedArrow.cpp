#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 0;
    int x = 0;
    int z = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if ((j >= n - k && j <= n - x) || (j >= n + x && j <= n + k))
            {

                if (j <= n)
                {
                    cout << z;
                    z--;
                }
                else
                {
                    z++;
                    cout << z;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        if (i <= n / 2)
        {
            z = i + 1;
            k += 2;
            x += 1;
        }
        else
        {
            z = n - i;
            k -= 2;
            x -= 1;
        }
    }
    return 0;
}