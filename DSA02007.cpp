#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;

        for(int i=0;i<s.size();i++)
        {
            char mx = s[(s.size()-1)];
            int pos;
            for(int j=i+1;j<s.size() and k>0;j++)
            {
                if(mx<=s[j])
                {
                    mx = s[j];
                    pos = j;
                }
            }
            if(mx > s[i] and k>0)
            {
                swap(s[i],s[pos]);
                k--;
            }
        }
        cout<<s<<endl;
    }
}
