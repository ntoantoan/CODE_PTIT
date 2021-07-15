#include<bits/stdc++.h>
using namespace std;
int n,k,ok,ans=0;
string s;
void in2()
{
    int mx = 0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            cnt++;
            mx = max(cnt,mx);
        }
        else
        {
            cnt=0;
        }
    }
    if(mx==k)
    {
        for(int i=0;i<n;i++)
            cout<<s[i];
        cout<<endl;
    }
}
void in()
{
    int mx = 0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            cnt++;
            mx = max(cnt,mx);
        }
        else
        {
            cnt=0;
        }
    }
    if(mx==k)
    {
        ans++;
    }
}
void gen()
{
    int i = s.size()-1;
    while(i>=0 and s[i]=='B')
    {
        s[i]='A';
        i--;
    }
    if(i>=0)
        s[i]='B';
    else ok=0;
}
int main()
{
    cin>>n>>k;
    s = "";
    for(int i=0;i<n;i++)
        s+="A";
    ok = 1;
    while(ok)
    {
        in();
        gen();
    }
    ok = 1;
    cout<<ans<<endl;
    while(ok)
    {
        in2();
        gen();
    }
}
