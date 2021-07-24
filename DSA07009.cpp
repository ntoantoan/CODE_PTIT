#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        stack<string> st;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]=='+' or a[i]=='-' or a[i]=='*' or a[i]=='/' or a[i]=='%' or a[i]=='^')
            {
                string e = st.top();
                st.pop();
                string f = st.top();
                st.pop();
                string tmp = "("+e+a[i]+f+")";
                st.push(tmp);
            }
            else st.push(string(1,a[i]));
        }
        cout<<st.top()<<endl;
    }
}
