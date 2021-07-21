#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    string a;
    int n;
    while(cin>>a)
    {
    if(a=="push")
    {
        cin>>n;
        st.push(n);
    }
    else if(a=="pop")
    {
        if(!st.empty())
        {
            st.pop();
        }
    }
    else if(a=="show")
    {
        if(st.size()==0)
        {
            cout<<"empty"<<endl;
            continue;
        }
        vector<int> v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
            st.push(v[i]);
        }
        cout<<endl;
    }
    }
}
