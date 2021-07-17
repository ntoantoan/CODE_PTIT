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
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int l = 1;
        int r = n;
        int ans = 0;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid]==0)
            {
               l = mid+1;
               ans = mid;
            }
            else
            {
                r = mid-1;
            }
        }
        cout<<ans<<endl;

    }
}
