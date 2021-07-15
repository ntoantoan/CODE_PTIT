#include<bits/stdc++.h>
using namespace std;
int n,ok;
int a[100][100];
int check[101][101];
vector<string> vec;
void Try(int i,int j,string s)
{
    if(a[0][0]==0 or a[n-1][n-1]==0)
    {
        return;
    }
    if(i==n-1 and j==n-1)
    {
        vec.push_back(s);
    }
    if(i<n-1 and a[i+1][j]==1 and check[i+1][j]==0)
    {
        check[i][j] = 1;
        Try(i+1,j,s+"D");
        check[i][j] = 0;
    }
    if(j<n-1 and a[i][j+1]==1 and check[i][j+1]==0)
    {
        check[i][j]=1;
        Try(i,j+1,s+"R");
        check[i][j]=0;
    }
    if(j>0 and a[i][j-1]==1 and check[i][j-1]==0)
    {
        check[i][j]=1;
        Try(i,j-1,s+"L");
        check[i][j]=0;
    }
    if(i>0 and a[i-1][j]==1 and check[i-1][j]==0)
    {
        check[i][j]=1;
        Try(i-1,j,s+"U");
        check[i][j]=0;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                check[i][j]=0;
            }
        ok = 0;
        string s = "";
        vec.clear();
        Try(0,0,s);
        if(vec.size()!=0)
        {
            sort(vec.begin(), vec.end());
            for(auto i:vec)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
