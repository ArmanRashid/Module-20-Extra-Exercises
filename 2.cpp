#include <bits/stdc++.h>
using namespace std;

// prime numbers are only divisible by 1 and the number itself
bool isPrime(int n)
{
    if(n==0 || n==1) return false; // '0' and '1' is not prime number

    for(int i=2; i<=n/2; i++) // we will divide n starting from 2 till half of n (half because: n wont be divisible by rest half anyway except n itself)
    {
        if(n%i == 0) return false; // in any iteration if n is divisible then its not prime number
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        bool check = isPrime(i);
        if(check == true) cout<< i <<" ";
    }
    return 0;
}
