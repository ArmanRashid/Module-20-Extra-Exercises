#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, k;
    cin>>n>>k;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    sort(ar, ar + n); // Built in sort function

    // 1 2 3 4 5
    cout<<ar[k-1]<< " " <<ar[n-k]; // k^th minimum is k^th element from first and k^th maximum is k^th element from last

    return 0;
}
