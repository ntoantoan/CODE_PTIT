#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int mx = 0;
    mx = max(a[0]*a[1]*a[n-1],mx);
    mx = max(a[0]*a[1],mx);
    mx = max(a[n-3]*a[n-2]*a[n-1],mx);
    mx = max(a[n-1]*a[n-2],mx);
    cout<<mx<<endl;

}
