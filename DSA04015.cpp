#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        long long a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        long long l = 1;
        long long r = n;
        long long ans = -1;
        while(l<=r)
        {
            long long mid = (l+r)/2;
            if(a[mid]<=x)
            {
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        cout<<ans<<endl;
    }
}
