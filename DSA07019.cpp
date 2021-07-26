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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        stack<long long> st;
        int i = 0;
        long long mx = 0;
        long long ans=0;
        while(i<n)
        {
            if(st.empty() or a[st.top()]<=a[i])
            {
                st.push(i++);
            }
            else
            {
                int t = st.top();
                st.pop();
                if(st.empty())
                {
                    mx = a[t]*i;
                }
                else
                    mx = a[t]*(i-st.top()-1);
                ans = max(mx,ans);
            }
        }
        while(!st.empty())
        {
            int t = st.top();
            st.pop();
            if(st.empty())
                mx = a[t]*i;
            else
                mx = a[t]*(i-st.top()-1);
            ans = max(mx,ans);
        }
        cout<<ans<<endl;

    }
}
