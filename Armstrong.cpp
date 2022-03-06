#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int ans = 1;
    int k = 1;
    while (k <= p)
    {
        if (k & p)
        {
            ans = ans * n;
        }
        k <<= 1;
        n *= n;
    }
    return ans;
}

bool IsArmstrong(int n)
{
    int digits = 0;
    int m = n;
    while (m)
    {
        digits++;
        m /= 10;
    }
    m = n;
    int sum = 0;
    while (m)
    {
        int r = m % 10;
        sum += power(r, digits);
        m /= 10;
    }

    return n == sum;
}

int main()
{
    int n;
    cin >> n;
    cout << boolalpha << IsArmstrong(n) << endl;

    return 0;
}