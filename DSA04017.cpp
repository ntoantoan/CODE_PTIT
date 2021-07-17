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
        int b[n];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n-1;i++)
            cin>>b[i];
        int res = 0;
        int fl=0;
        for(int i=1;i<=n-1;i++)
        {
            if(a[i]!=b[i])
            {
                res = i;
                fl=1;
                break;
            }
        }
        if(fl)
            cout<<res<<endl;
        else cout<<res-1<<endl;

    }
}
