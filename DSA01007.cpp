#include<bits/stdc++.h>
using namespace std;
int n,ok;
string s;
void in()
{
    for(int i=0;i<n;i++)
        cout<<s[i];
    cout<<" ";
}
void gen()
{
    int i=n-1;
    while(i>=0 and s[i]=='B')
    {
        s[i] = 'A';
        i--;
    }
    if(i>=0)
    {
        s[i] = 'B';
    }
    else ok=0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ok=1;
        cin>>n;
        s = "";
        for(int i=0;i<n;i++)
            s+="A";
        while(ok)
        {
            in();
            gen();
        }
        cout<<endl;
    }
}
