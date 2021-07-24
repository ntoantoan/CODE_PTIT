#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        string word;
        stack<string> st;
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]==' ' or i == s.size())
            {
                st.push(word);
                word = "";
            }
            else
                word+=s[i];
        }
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}
