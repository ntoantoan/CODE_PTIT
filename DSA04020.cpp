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
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int l = 1;
        int r = n;
        int fl=0;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid]==k)
            {
                cout<<mid<<endl;
                fl=1;
                break;
            }
            else if(a[mid]>k)
            {
                r = mid-1;
            }
            else if(a[mid]<k)
                l = mid+1;
        }
        if(!fl)
            cout<<"NO"<<endl;
    }
}
