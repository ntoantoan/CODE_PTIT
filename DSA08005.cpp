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
        if(n>1)
            cout<<"1"<<" ";
        for(int i=2;i<=n;i++)
        {
        stack<int> st;
        int j=i;
        while(j)
        {
            st.push(j%2);
            j/=2;
        }
        int res = 0;
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<" ";
        }
        cout<<endl;
        }
}
