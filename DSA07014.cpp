#include<bits/stdc++.h>
using namespace std;
string preto(string s)
{
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' or s[i]=='%' or s[i]=='^')
        {
            string a = st.top();st.pop();
            string b = st.top();st.pop();
            string tmp = a+b+s[i];
            st.push(tmp);
        }
        else
            st.push(string(1,s[i]));
    }
    return st.top();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        s = preto(s);
        stack<long long> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' or s[i]=='%' or s[i]=='^')
            {
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                long long tmp;
                if(s[i]=='+')
                    tmp = b+a;
                if(s[i]=='-')
                    tmp = b-a;
                if(s[i]=='*')
                    tmp = b*a;
                if(s[i]=='/')
                    tmp = b/a;
                if(s[i]=='%')
                    tmp = b%a;
                if(s[i]=='^')
                    for(int i=0;i<a;i++)
                {
                    tmp = b;
                    for(int i=0;i<a-1;i++)
                        tmp*=b;
                }
                st.push(tmp);
            }
            else
                st.push((long long)(s[i]-'0'));
        }
        cout<<st.top()<<endl;
    }
}
