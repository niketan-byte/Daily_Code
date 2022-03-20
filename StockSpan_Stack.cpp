#include <bits/stdc++.h>
using namespace std;

void stockSpan(int prices[], int n, int span[])
{
    stack<int> s; // indices of the days
    s.push(0);
    span[0]=1; 

    // loop for the rest of the days -> O(N) -> Push and pop each element only once
    for (int i = 1; i <= n - 1; i++)
    {
        int currentPrices = prices[i];

        // topmost element that is higher than current prices
        while (!s.empty() && prices[s.top()] <= currentPrices)
        {
            s.pop();
        }

        if (!s.empty())
        {
            int previousHigh = s.top();
            span[i] = i - previousHigh;
        }
        else
        {
            span[i] = i + 1;
        }

        // push this element into the stack
        s.push(i);
    }
}

int main()
{
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices) / sizeof(int);
    int span[100000] = {0};
    stockSpan(prices,n,span);
    for(int i=0;i<n;i++)
    {
        cout<<span[i]<<" ";
    }
    return 0;
}