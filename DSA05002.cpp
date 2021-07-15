#include<bits/stdc++.h>
using namespace std;
int F[101][101];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mx=0;
        memset(F,0,sizeof(F));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
        {
            if(s[i-1]==s[j-1] and i!=j)
                F[i][j] = F[i-1][j-1]+1;
            else F[i][j] = max(F[i-1][j],F[i][j-1]);
            mx = max(mx,F[i][j]);
        }
        cout<<mx<<endl;
    }
}
