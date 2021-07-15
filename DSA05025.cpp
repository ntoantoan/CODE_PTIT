#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long F[93];
    F[0]=0;
    F[1]=1;
    F[2]=2;
    F[3]=4;
    for(int i=4;i<=92;i++)
        F[i] = F[i-1]+F[i-2]+F[i-3];
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<F[n]<<endl;
    }
}
