#include<bits/stdc++.h>
using namespace std;
long long n;
long long F[2][2],res[2][2];
long long mod = 1e9+7;
void Mul(long long F[2][2], long long res[2][2])
{
    long long a = ((F[0][0]*res[0][0])%mod+(F[0][1]*res[1][0])%mod)%mod;
    long long b = ((F[0][0]*res[0][1])%mod +(F[0][1]*res[1][1])%mod)%mod;
    long long c = ((F[1][0]*res[0][0])%mod + (F[1][1]*res[1][0])%mod)%mod;
    long long d = ((F[1][0]*res[0][1])%mod + (F[1][1]*res[1][1])%mod)%mod;

    F[0][0] = a;
    F[0][1] = b;
    F[1][0] = c;
    F[1][1] = d;
}
void Pow(long long F[2][2], long long n)
{
    if(n<=1)
        return;
    Pow(F,n/2);
    Mul(F,F);
    if(n%2)
        Mul(F,res);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    F[0][0] = F[0][1] = F[1][0] = 1;
    F[1][1] = 0;
    res[0][0] = res[0][1] = res[1][0] = 1;
    res[1][1] = 0;
        cin>>n;
        if(n==0)
            cout<<0<<endl;
        else
        {
            Pow(F,n-1);
            cout<<F[0][0]<<endl;
        }
    }
}
