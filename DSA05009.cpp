#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int sum=0;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int c[sum/2+1];
            memset(c,0,sizeof(c));
            c[1]=1;

            for(int i=1;i<n;i++)
            {
                for(int j=sum/2;j>=a[i];j--)
                {
                    if(c[j]==0 and c[j-a[i]]==1)
                        c[j]=1;
                }
            }
            if(c[sum/2])
                cout<<"YES"<<endl;
        }


    }
}
