#include<bits/stdc++.h>
using namespace std;
long long n;
long long mod = 123456789;
long long Pow(long long n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    long long p = Pow(n/2);
    if(n%2==0)
        return (p*p)%mod;
    return 2*p*p%mod;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n--;
        cout<<Pow(n)<<endl;
    }
}
