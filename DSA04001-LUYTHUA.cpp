#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long mod = 1e9+7;
long long Pow(long long a, long long b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    if(b%2==0)
    {
        long long res = Pow(a,b/2);
        return (res*res)%mod;
    }
    long long res = Pow(a,b-1);
    return (a*res)%mod;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<Pow(n,k)<<endl;
    }

}
