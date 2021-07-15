#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n,ok;
string s;
vector<string> vec;
void Try(int i,int j,string s)
{
    if(a[1][1]==0)
    {
        ok=0;
        return;
    }
    if(i==n and j==n and a[n][n]==1)
    {
        ok=1;
        vec.push_back(s);
        return;
    }
    if(i<n and a[i+1][j]==1)
    {
        Try(i+1,j,s+"D");
    }
    if(j<n and a[i][j+1]==1)
    {
        Try(i,j+1,s+"R");
    }
    if((i<n and j<n and a[i+1][j]==0 and a[i][j+1]==0) or i>n or j>n or i<=0 or j<=0)
    {
        return;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vec.clear();
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        }
        ok = 0;
        s = "";
        Try(1,1,s);
        if(ok)
        {
        sort(vec.begin(),vec.end());
        for(auto i: vec)
        {
            cout<<i<<" ";
        }
        }
        else cout<<-1;

        cout<<endl;
    }
}
