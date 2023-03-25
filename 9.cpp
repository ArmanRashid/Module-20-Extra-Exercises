#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    // Native Approach
    int pair_count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i] + ar[j] == k)
            {
                pair_count++;
            }
        }
    }
    cout<<pair_count;

    return 0;
}

/*
7 8
1 2 3 4 5 6 7



*/
