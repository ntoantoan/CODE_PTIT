#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    string c = a;
    string d = b;
    int mx = 0;
    int mn = 0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='6')
            a[i] = '5';
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='6')
            b[i]='5';
    }
    cout<<stoi(a)+stoi(b)<<" ";
    for(int i=0;i<c.size();i++)
    {
        if(c[i]=='5')
            c[i]='6';
    }
    for(int i=0;i<d.size();i++)
    {
        if(d[i]=='5')
            d[i] = '6';
    }
    cout<<stoi(c)+stoi(d)<<endl;
}
