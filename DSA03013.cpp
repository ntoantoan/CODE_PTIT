#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string a;
        cin>>a;
        int d[300] = {0};
        int mx = 0;
        for(int i=0;i<a.size();i++)
        {
            d[a[i]]++;
            mx = max(mx,d[a[i]]);
        }
        if((mx-1)*(k-1) > a.size()-mx)
            cout<<-1<<endl;
        else cout<<1<<endl;
    }
}
