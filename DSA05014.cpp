#include<bits/stdc++.h>
using namespace std;
long long ugly(int n)
{
    long long u[n+1];
    long long i2 = 0, i3 = 0, i5 = 0;
    u[0] = 1;
    for(int i=1;i<n;i++)
    {
        u[i] = min(u[i2]*2,min(u[i3]*3,u[i5]*5));
        if(u[i] == u[i2]*2)
            i2++;
        if(u[i] == u[i3]*3)
            i3++;
        if(u[i]==u[i5]*5)
            i5++;
    }
    return u[n-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ugly(n)<<endl;
    }
}
