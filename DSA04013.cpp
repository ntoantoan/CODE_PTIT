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
        sort(a+1,a+n+1);
        int j = n/2;
        int i = n;
        int cnt=0;
        while(i>=n/2 and j>=1)
        {
            if(a[i]>=2*a[j])
            {
                i--;
                j--;
                cnt++;
            }
            else
            {
                j--;
            }
        }
        cout<<n-cnt<<endl;

    }
}
