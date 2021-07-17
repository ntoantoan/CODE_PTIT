#include<bits/stdc++.h>
using namespace std;
long long Pow(long long n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    long long res = Pow(n/2);
    if(n%2) return 2*res*res;
    return res*res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ans = Pow(n)/2;
        while(1)
        {
            if(n==1)
            {
                cout<<1<<endl;
                break;
            }
            if(ans == k)
            {
                cout<<n<<endl;
                break;
            }
            if(k>ans)
            {
                k = ans-(k-ans);
            }
            n--;
            ans/=2;
        }
        cout<<endl;
    }
}
