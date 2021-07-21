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
        int b[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int fl = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i] and a[i]!=b[n-i-1])
            {
                fl=1;
                break;
            }
        }
        if(!fl)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
