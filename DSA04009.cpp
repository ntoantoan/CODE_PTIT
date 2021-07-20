#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long n,k;
long long b[11][11];
long long a[11][11];
void Mul(long long a[11][11],long long b[11][11])
{
    long long res[11][11];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            long long tmp = 0;
            for(int k=1;k<=n;k++)
            {
                tmp += (a[i][k]*b[k][j])%mod;
                tmp%=mod;
            }
            res[i][j] = tmp;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            a[i][j] = res[i][j];
    }
 }
 void Pow(long long a[11][11], long long k)
 {
     if(k<=1)
        return;
     Pow(a,k/2);
     Mul(a,a);
     if(k%2)
        Mul(a,b);
 }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>a[i][j];
                b[i][j] = a[i][j];
            }
        }
        Pow(a,k);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}
