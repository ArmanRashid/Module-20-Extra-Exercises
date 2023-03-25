#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    int ar[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>ar[i][j];
        }
    }

    int sum = 0;
    for(int i=1; i<row; i+=2) // only even positioned(not indexed) rows(1,3,5....)
    {
        for(int j=0; j<col; j+=2) // only odd positioned(not indexed) columns(0,2,4....)
        {
            sum += ar[i][j];
        }
    }

    cout<<sum;


    return 0;
}

/*

3 3
1 2 3
4 5 6
7 8 9
answer: 10


4 4
1 2 3 9
4 5 6 9
7 8 9 9
4 5 6 9

*/
