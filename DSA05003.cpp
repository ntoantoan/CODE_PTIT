#include<bits/stdc++.h>
using namespace std;
int F[101][101][101];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,p;
        cin>>n>>m>>p;
        string a,b,c;
        cin>>a>>b>>c;

        memset(F,0,sizeof(F));
        int mx = 0;
        for(int i=1;i<=a.size();i++)
        {
            for(int j=1;j<=b.size();j++)
            {
                for(int k=1;k<=c.size();k++)
                {
                    if(a[i-1]==b[j-1] and b[j-1]==c[k-1])
                        F[i][j][k] = F[i-1][j-1][k-1]+1;
                    else F[i][j][k] = max(F[i-1][j][k],max(F[i][j-1][k],F[i][j][k-1]));
                }
            }
        }
        cout<<F[n][m][p]<<endl;

    }
}
