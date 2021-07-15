#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> vec;
        while(n>0)
        {
            long long t = n%10;
            vec.push_back(t);
            n/=10;
        }

        reverse(vec.begin(), vec.end());
        long long sum = 0;
        for(int i=0;i<vec.size();i++)
        {
            long long tmp = 0;
            for(int j=i;j<vec.size();j++)
            {
                tmp = 10*tmp+vec[j];
                sum+=tmp;
            }
        }
        cout<<sum<<endl;
    }
}
