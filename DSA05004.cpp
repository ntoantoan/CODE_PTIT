#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int F[1001]={0};
    int mx = 0;
    for(int i=1;i<=n;i++)
    {
        F[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
                F[i] = max(F[i],F[j]+1);
            mx = max(mx,F[i]);
        }
    }
    cout<<mx<<endl;

}
