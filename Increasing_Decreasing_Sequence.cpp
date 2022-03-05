#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin >> n;
    int prev;
    cin >> prev;

    bool isValid = true;
    bool isDecreasing = true;

    while(--n) {
        int curr;
        cin >> curr;
        if(curr == prev) {
            isValid = false;
            break;
        }
        else if(curr > prev) {
            isDecreasing = false;
        }
        else if(!isDecreasing && curr < prev) {
            isValid = false;
            break;
        }

        prev = curr;
    }

    cout << boolalpha << isValid << endl;

    return 0;
}