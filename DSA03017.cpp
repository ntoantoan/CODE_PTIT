#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        int a[200] = {0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]]++;
        }
        priority_queue<int> pq;
        for(int i=0;i<s.size();i++)
        if(a[s[i]])
        {
            pq.push(a[s[i]]);
            a[s[i]]=0;
        }

        while(!pq.empty() and k>0)
        {
            int s = pq.top();
            pq.pop();
            k--;
            s--;
            if(s==0)
                break;
            pq.push(s);
        }

        long long sum = 0;
        while(!pq.empty())
        {
            long long s = pq.top();
            pq.pop();
            sum += s*s;
        }
        cout<<sum<<endl;
    }
}
