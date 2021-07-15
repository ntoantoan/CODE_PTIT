#include<bits/stdc++.h>
using namespace std;
int F[1001][1001];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        int n = s1.size();
        int m = s2.size();
        int mx = 0;
        memset(F,0,sizeof(F));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                    F[i][j] = F[i-1][j-1]+1;
                else
                    F[i][j] = max(F[i-1][j],F[i][j-1]);
                mx = max(mx,F[i][j]);
            }
        }
        cout<<mx<<endl;
    }
}
