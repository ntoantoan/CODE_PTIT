#include<bits/stdc++.h>
using namespace std;
int h[100],c[100],ng[100],x[100];
int cnt,n;
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!h[j] and !c[j] and !ng[i+j-1] and !x[i-j+n])
        {
            h[j]=c[j]=ng[i+j-1]=x[i-j+n] = 1;
            if(i==n)
            {
                cnt++;
            }
            else Try(i+1);
            h[j] = c[j] = ng[i+j-1] = x[i-j+n] = 0;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        Try(1);
        cout<<cnt<<endl;
    }
}
