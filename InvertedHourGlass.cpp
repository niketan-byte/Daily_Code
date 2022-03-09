#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    k = n;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        for (int j = 1; j <= 2 * n + 1; j++)
        {
            if (i <= n + 1)
            {

                if (j <= i || j >= (2 * n + 2 - i))
                {
                    if (j < n + 1)
                    {

                        cout << k;
                        k--;
                    }
                    if (j == n + 1)
                    {

                        cout << k;
                    }
                    if (j > n + 1)
                    {
                        k++;
                        cout << k;
                    }
                }
                else
                {
                    cout << " ";
                }
            }
            if (i > n + 1)
            {
                if (j <= 2 * n + 2 - i || j >= i)
                {
                    if (j <= n + 1)
                    {

                        cout << k;
                        k--;
                    }
                    if (j > n + 1)
                    {
                        k++;
                        cout << k;
                    }
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
