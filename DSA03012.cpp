#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int d[300] = {0};
        int mx = 0;
        for(int i=0;i<a.size();i++)
        {
            d[a[i]]++;
            mx = max(mx,d[a[i]]);
        }
        if(mx<=a.size()/2 and a.size()%2==0)
            cout<<1<<endl;
        else if(mx<=(a.size()/2+1) and a.size()%2==1)
            cout<<1<<endl;
        else cout<<-1<<endl;
    }
}
