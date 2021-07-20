#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>m>>n;
        int a[m+1];
        int b[n+1];
        int c[m+n+2];
        for(int i=0;i<m;i++)
            cin>>a[i];
        for(int j=0;j<n;j++)
            cin>>b[j];
        memset(c,0,sizeof(c));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                c[i+j] += (a[i]*b[j]);
            }
        }
        for(int i=0;i<n+m-1;i++)
            cout<<c[i]<<" ";
        cout<<endl;
    }
}
