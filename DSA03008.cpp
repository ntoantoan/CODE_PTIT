#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        pair<int,int> p[n+1];
        for(int i=0;i<n;i++)
            cin>>p[i].first;
        for(int i=0;i<n;i++)
            cin>>p[i].second;

        sort(p,p+n,cmp);
        int cnt=1;
        int res=0;
        for(int i=1;i<n;i++)
        {
            if(p[i].first>=p[res].second)
            {
                cnt++;
                res = i;
            }
        }
        cout<<cnt<<endl;

    }
}
