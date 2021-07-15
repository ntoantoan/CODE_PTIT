#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
int b[100];
vector<vector<int>> vec;
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n-1)
        {
            int sum=0;
            for(int l=0;l<n;l++)
                if(a[l])
                sum+=b[l];
            if(sum==k)
            {
                vector<int> x;
                for(int l=0;l<n;l++)
                    if(a[l])
                    x.push_back(b[l]);

                vec.push_back(x);
            }
        }
        else Try(i+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vec.clear();
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(b,b+n);
        Try(0);
        if(vec.size()==0)
            cout<<-1<<endl;
        else
        {
            sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++)
        {
            cout<<"[";
            for(int j=0;j<vec[i].size()-1;j++)
                cout<<vec[i][j]<<" ";
            cout<<vec[i][vec[i].size()-1]<<"] ";
        }
        cout<<endl;
        }
    }
}
