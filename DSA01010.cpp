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
        int a[k+1];
        int b[k+1];
        for(int i=1;i<=k;i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }

        int i=k;
        int fl=0;
        while(i>0 and a[i]==n-k+i)
            i--;
        if(i>0)
        {
            a[i]+=1;
            for(int j=i+1;j<=k;j++)
                a[j] = a[i]+j-i;
        }
        else
        {
            cout<<k<<endl;
            fl=1;
        }
        int cnt=0;
        if(!fl)
        {

            for(int i=1;i<=k;i++)
                for(int j=1;j<=k;j++)
                {
                    if(a[i]==b[j])
                        cnt++;
                }
            cout<<k-cnt<<endl;
        }

    }
}
