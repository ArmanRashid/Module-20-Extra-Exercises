#include <bits/stdc++.h>
using namespace std;

int binarySearch(int ar[], int x, int lb, int ub)
{
    if(lb<=ub)
    {
        int mid = (lb+ub)/2;

        if(ar[mid] == x) return mid;
        else
        {
            if(ar[mid] > x) binarySearch(ar, x, lb, mid-1);
            else binarySearch(ar, x, mid+1, ub);
        }
    }
    else return -1;
}

int main()
{
    int n, k;
    cin>>n>>k;

    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    int position = binarySearch(ar, k, 0, n-1);
    if(position != -1) cout<<"Position: " <<position+1;
    else cout<<"Value not found"<<endl;
    return 0;
}

/*

7 8
1 2 3 4 7 8 9

2 4 6 8 10 12 14 16
*/
