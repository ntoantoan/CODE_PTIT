#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int n = a.size();

        cout<<a.size()<<endl;
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i]==a[j])
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[n][n]<<endl;

    }
}
