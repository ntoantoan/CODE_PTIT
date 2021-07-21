#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long ans = 0;
        for(int i=0;i<n;i++)
        {
            ans+=a[i]*i;
            ans%=mod;
        }
        cout<<ans<<endl;
    }
}
