#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int F[40001] = {0};
        F[0] = 1;
        for(int i=0;i<n;i++)
        {
            for(int j=s;j>=a[i];j--)
            {
                if(F[j]==0 and F[j-a[i]]==1)
                    F[j]=1;
            }
        }
        if(F[s])
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
