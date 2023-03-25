#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    int max = ar[0];
    for(int i=1; i<n; i++)
    {
        if(ar[i] > max) max = ar[i];
    }

    int *freq = new int[max+1] {0};
    for(int i=0; i<n; i++)
    {
        int val = ar[i];
        freq[val]++;
    }

    int dist_count = 0;
    for(int i=0; i<=max; i++)
    {
        if(freq[i] > 0)
        {
            dist_count++;
        }
    }

    cout<<dist_count;

    return 0;
}

/*

7
2 3 3 4 5 5 5

8
2 4 4 2 8 5 5 4

5
0 1 2 3 4

*/
