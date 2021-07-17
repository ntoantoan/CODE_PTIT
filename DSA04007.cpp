#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        string a,b;
        cin>>k>>a>>b;

        while(a.size() > b.size())
            b = "0"+b;
        while(b.size() > a.size())
            a = "0"+a;

        string res = "";
        int rm = 0;

        for(int i=a.size()-1;i>=0;i--)
        {
            int num = int(a[i]-'0') + int(b[i]-'0') + rm;
            res = char(num%k+'0')+res;
            rm = num/k;
        }
        if(rm>0)
            res = char(rm + '0') + res;
        cout<<res<<endl;
    }
}
