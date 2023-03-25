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

    // creating prefix sum array (considering only positive numbers for prefix sum)
    int pre_sum[n];
    if(ar[0] > 0) pre_sum[0] = ar[0];
    else pre_sum[0] = 0;

    for(int i=1; i<n; i++)
    {
        if(ar[i] > 0) pre_sum[i] = ar[i] + pre_sum[i-1];
        else pre_sum[i] = pre_sum[i-1];
    }

    int q;
    cout<<"Please enter number of quesries: ";
    cin>>q;

    // finding sum of range L to R for each Query (q)
    for(int i=0; i<q; i++)
    {
        int L, R;
        cout<<"Enter L & R: ";
        cin>>L>>R;

        if(L == 1) cout<<"The Sum of Range from L to R is: " << pre_sum[R-1]<<endl;
        else cout<<"The Sum of Range from L to R is: " << pre_sum[R-1] - pre_sum[L-2]<<endl;
    }

    return 0;
}

/*

6
1 -2 3 -4 5 6
3
1 3
4 6
2 4


*/
