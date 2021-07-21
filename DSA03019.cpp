#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long p,q;
    while(t--)
    {
        cin>>p>>q;
        long long res;
        while(1)
        {
            if(q%p==0)
            {
                cout<<"1/"<<q/p<<endl;
                break;
            }
            else
            {
                res = q/p+1;
                cout<<"1/"<<res<<" + ";
                p = p*res - q;
                q = q*res;
            }
        }
    }
}
