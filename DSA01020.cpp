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
        int i = s.size()-1;
        while(i>=0 and s[i]=='0')
        {
            s[i]='1';
            i--;
        }
        if(i>0)
            s[i]='0';
        for(int i=0;i<s.size();i++)
            cout<<s[i];
        cout<<endl;
    }
}
