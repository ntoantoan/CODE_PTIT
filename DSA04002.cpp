#include<bits/stdc++.h>
using namespace std;
//commit
long long mod = 1e9+7;
long long P(long long n, long long m)
{
    if(m==0)
        return 1;
    if(m==1)
        return n%mod;
    if(m%2==0)
    {
        long long res = P(n,m/2);
        return (res*res)%mod;
    }
    long long res = P(n,m-1);
    return (n*res)%mod;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long p = n;
        long long m = 0;
        while(n>0)
        {
            m = m*10+n%10;
            n/=10;
        }
        cout<<P(p,m)%mod<<endl;
    }
}
