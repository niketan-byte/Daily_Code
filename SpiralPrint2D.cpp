#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int row=0;row<m;row++)
    {
        for(int col=0;col<n;col++)
        {
            cin>>a[row][col];
        }
    }
    int startRow = 0;
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;

    while(startRow<=endRow && startCol<=endCol)
    {
        // Star Row
        for(int i=startCol;i<=endCol;i++)
        {
            cout<<a[startRow][i]<<" ";
        }
        startRow++;
        
        // endCol
        for(int i=startRow;i<=endRow;i++)
        {
            cout<<a[i][endCol]<<" ";
        }
        endCol--;

        // endRow
        if(startRow<endRow)
        {
            for(int i=endCol;i>=startCol;i--)
            {
                cout<<a[endRow][i]<<" ";
            }
            endRow--;
        }


        // startCol
        if(startCol<endCol)
        {
            for(int i=endRow;i>=startRow;i--)
            {
                cout<<a[i][startCol]<<" ";
            }
            startCol++;
        }
        
    }
    return 0;
}