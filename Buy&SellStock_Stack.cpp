#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>prices)
{
stack<int>s;
int max_profit=0;
int n = prices.size();
int st_day=0;
int sell_day=0;
if(n==0)
{
    cout<<st_day<<" "<<sell_day<<endl;
    return 0;
}
s.push(prices[0]);
int i=1;
while(i<n)
{
    if(prices[i]<s.top())
    {
        s.push(prices[i]);
        st_day = i;
    }
    else{
        int profit = prices[i]-s.top();
        if(profit>max_profit)
        {
            max_profit = profit;
            sell_day = i;
        }
        // max_profit=max(max_profit,profit);

    }
i++;
}
if(st_day<sell_day){
cout<<st_day<<" "<<sell_day<<endl;}
else{
    cout<<"-1"<<" "<<"-1"<<endl;
}
return max_profit;
}

int main()
{
    int n,d;
    cin>>n;

    vector<int> prices;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        prices.push_back(d);
    }
    cout<<maxProfit(prices)<<endl;
  return 0;
}