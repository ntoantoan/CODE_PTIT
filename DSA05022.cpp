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
        int ins,remo,cop;
        cin>>ins>>remo>>cop;
        int dp[n+1] = {0};
        dp[0] = 0;
        dp[1] = ins;
        for(int i=2;i<=n;i++)
        {
            if(i%2!=0)
                dp[i] = min(dp[i-1]+ins,dp[(i+1)/2]+remo+cop);
            else dp[i] = min(dp[i-1]+ins,dp[i/2]+cop);
        }
        cout<<dp[n]<<endl;
    }
}
