#include<bits/stdc++.h>
using namespace std;
int n,k,ok;
int a[100];
void in()
{
    int cnt = 0;
    for(int i=0;i<n;i++)
        if(a[i]==1)
            cnt++;
    if(cnt==k)
    {
        for(int i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;
    }
}
void gen()
{
    int i=n-1;
    while(i>=0 and a[i]==1)
    {
        a[i] = 0;
        i--;
    }
    if(i>=0)
    {
        a[i]=1;
    }
    else ok=0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
            a[i]=0;
        ok = 1;
        while(ok)
        {
            in();
            gen();
        }
    }
}
