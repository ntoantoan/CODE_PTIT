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
        for(int i=0;i<n;i++)
            a[i]=n-i;
        for(int i=0;i<n;i++)
            cout<<a[i];
        cout<<" ";
        while(prev_permutation(a,a+n))
        {
            for(int i=0;i<n;i++)
                cout<<a[i];
            cout<<" ";
        }
        cout<<endl;

    }
}
