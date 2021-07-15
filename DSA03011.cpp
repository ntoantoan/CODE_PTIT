#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<long long,vector<long long>, greater<long long>> pq;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            pq.push(x);
        }
        long long sum = 0;
        while(pq.size()>1)
        {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            long long s = (a+b);
            sum+=s;
            pq.push(s%mod);
        }
        cout<<sum%mod<<endl;
    }
}
