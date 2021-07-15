#include<bits/stdc++.h>
using namespace std;
int ok,n,k;
int a[100];
void in()
{
    for(int i=1;i<=k;i++)
        cout<<a[i];
    cout<<" ";
}
void gen()
{
    int i=k;
    while(i>0 and a[i]==n-k+i)
        i--;
    if(i>0)
    {
        a[i]+=1;
        for(int j=i+1;j<=k;j++)
            a[j] = a[i]+j-i;
    }
    else
        ok=0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        for(int i=1;i<=k;i++)
            a[i] = i;

        ok = 1;
        while(ok)
        {
            in();
            gen();
        }
        cout<<endl;
    }
}
