#include<bits/stdc++.h>
int a[100][100];
int m,n,ok,cnt;
using namespace std;
void Try(int i, int j)
{
    if(i==m-1 and j==n-1)
    {
        cnt++;
        return;
    }
    if(i<m-1)
    {
        Try(i+1,j);
    }
    if(j<n-1)
    {
        Try(i,j+1);
    }
    if(i<0 or i>m-1 or j<0 or j>n-1)
        return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        cnt=0;
        Try(0,0);
        cout<<cnt<<endl;
    }
}
