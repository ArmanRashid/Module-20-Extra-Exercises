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

    // converting ar to prefix sum ar
    for(int i=1; i<n; i++)
    {
        ar[i] = ar[i-1] + ar[i];
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

        if(L == 1) cout<<"The Sum of Range from L to R is: " << ar[R-1]<<endl;
        else cout<<"The Sum of Range from L to R is: " << ar[R-1] - ar[L-2]<<endl;
    }

    return 0;
}

/*

6
1 2 3 4 5 6
3
1 3
4 6
2 4

*/
