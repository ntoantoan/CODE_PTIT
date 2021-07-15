#include<bits/stdc++.h>
using namespace std;
int F[25001];
int main()
{
    int s,n;
    cin>>s>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    F[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=s;j>=a[i];j--)
        {
            if(!F[j] and F[j-a[i]]==1)
            F[j]=1;

        }
    }
    for(int i=s;i>=0;i--)
    {
        if(F[i])
        {
            cout<<i;
            break;
        }
    }
}
