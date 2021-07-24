#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<long long> st;
        for(long long i=0;i<s.size();i++)
        {
            if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' or s[i]=='%' or s[i]=='^')
            {
                long long  a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                if(s[i]=='+')
                {
                    long long res = a+b;
                    st.push(res);
                }
                if(s[i]=='-')
                {
                    long long res = b-a;
                    st.push(res);
                }
                if(s[i]=='*')
                {
                    long long res = b*a;
                    st.push(res);
                }
                if(s[i]=='/')
                {
                    long long res = b/a;
                    st.push(res);
                }
                if(s[i]=='%')
                {
                    long long res = b%a;
                    st.push(res);
                }
                if(s[i]=='^')
                {
                    long long res = b;
                    for(int i=0;i<a-1;i++)
                    {
                        res*=b;
                    }
                    st.push(res);
                }
            }
            else
            {
                st.push((long long)(s[i]-'0'));
            }
        }
        cout<<st.top()<<endl;
    }
}
