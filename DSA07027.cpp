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
        vector<int> v;
        stack<int> st;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and a[i]>=st.top())
                st.pop();
            if(!st.empty())
                v.push_back(st.top());
            else v.push_back(-1);
            st.push(a[i]);
        }
        reverse(v.begin(),v.end());
        for(auto i:v)
            cout<<i<<" ";
        cout<<endl;
    }
}
