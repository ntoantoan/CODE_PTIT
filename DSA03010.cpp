#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<long long,vector<int>, greater<int>> pq;
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
            long long s = a+b;
            sum+=s;
            pq.push(s);
        }
        cout<<sum<<endl;
    }
}
