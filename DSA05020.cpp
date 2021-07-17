#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i==1 and j==1)
                    dp[i][j] = a[i][j];
                else if(i==1)
                    dp[i][j] = dp[i][j-1]+a[i][j];
                else if(j==1)
                    dp[i][j] = dp[i-1][j] + a[i][j];
                else
                dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+a[i][j];
            }
        }
        cout<<dp[n][m]<<endl;
    }
}
