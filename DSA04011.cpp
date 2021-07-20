#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        long long s1 = 0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='0')
                s1+=0;
            else
            s1+=pow(2,a.size()-i-1);
        }
        long long s2 = 0;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]=='0')
                s2+=0;
            else s2+=pow(2,b.size()-i-1);
        }
        cout<<s1*s2<<endl;
    }
}
