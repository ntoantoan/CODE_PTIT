#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    stack<int> st;
    while(q--)
    {
        string a;
        cin>>a;
        int n;
        if(a=="PUSH")
        {
            cin>>n;
            st.push(n);
        }
        else if(a=="POP")
        {
            if(!st.empty())
            st.pop();
        }
        else
        {
            vector<int> v;
            if(st.size()==0)
            {
                cout<<"NONE"<<endl;
                continue;
            }
            while(!st.empty())
            {
                v.push_back(st.top());
                st.pop();
            }
            reverse(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
                st.push(v[i]);
            cout<<v[v.size()-1]<<endl;
        }
    }
}
