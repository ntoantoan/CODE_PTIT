#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt;
        cin>>cnt>>s;
        cout<<cnt<<" ";
        if(next_permutation(s.begin(),s.end()))
        {
            for(int i=0;i<s.size();i++)
                cout<<s[i];

        }
        else
        {
            cout<<"BIGGEST";
        }
        cout<<endl;
    }
}
