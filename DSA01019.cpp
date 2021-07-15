#include<bits/stdc++.h>
using namespace std;
int n,ok;
string s;
void in()
{


    int check = 0;
    for(int i=0;i<n-1;i++)
        if(s[i]=='H' and s[i+1]=='H')
        check=1;
    if(!check)
    {
        if(s[0]=='H' and s[n-1]=='A')
        {
        for(int i=0;i<n;i++)
            cout<<s[i];
        cout<<endl;
        }


    }

}
void gen()
{
    int i=n-1;
    while(i>=0 and s[i]=='H')
    {
        s[i]='A';
        i--;
    }
    if(i>=0)
    {
        s[i]='H';
    }
    else ok=0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s = "";
        for(int i=0;i<n;i++)
            s+='A';
        ok = 1;
        while(ok)
        {
            in();
            gen();
        }
    }
}
