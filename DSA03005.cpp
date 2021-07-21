#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int s1 = 0;
        int s2 = 0;
        for(int i=0;i<k;i++)
            s1+=a[i];
        for(int i=k;i<n;i++)
            s2+=a[i];
        int res = abs(s1-s2);
        s1 = 0;
        s2 = 0;
        for(int i=n-k;i<n;i++)
            s1+=a[i];
        for(int i=0;i<n-k;i++)
            s2+=a[i];
        cout<<max(res,abs(s1-s2))<<endl;
    }
}
