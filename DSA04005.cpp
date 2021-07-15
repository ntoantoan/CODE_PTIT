#include<bits/stdc++.h>
using namespace std;
int F[94];
int main()
{
    F[1] = 0;
    F[2] = 1;
    for(int i=3;i<=92;i++)
        F[i] = F[i-2]+F[i-1];

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

    }
}
