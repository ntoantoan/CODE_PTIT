#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m,p;
    cin>>n>>m>>p;
    int a[n+1];
    int b[m+1];
    int c[p+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    for(int i=0;i<p;i++)
        cin>>c[i];
    int i=0,j=0,k=0;
    vector<int> vec;
    while(i<n and j<m and k<p)
    {
        if(a[i]==b[j] and b[j]==c[k])
        {
            vec.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j])
            i++;
        else if(b[j]<c[k])
            j++;
        else k++;
    }
    if(vec.size())
    {
        for(auto i:vec)
            cout<<i<<" ";
        cout<<endl;
    }
    else cout<<"NO"<<endl;
    }
}
