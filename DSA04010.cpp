#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        int f[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        f[0] = 0;
        for(int i=1;i<=n;i++)
        {
            f[i] = f[i-1]+a[i];
        }
        int  ans=0;
        for(int i=0;i<=n-1;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                ans = max(ans,f[j]-f[i]);
            }
        }
        cout<<ans<<endl;
    }
}
