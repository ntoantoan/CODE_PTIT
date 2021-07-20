#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[] = {1,2,5,10,20,50,100,200,500,1000};
        int k = 9;
        int n;
        cin>>n;
        int cnt=0;
        while(n>=0 and k>=0)
        {
            if(n>=a[k])
            {
                cnt+= n/a[k];
                int res = n/a[k];
                n-=res*a[k];
            }
            else
            {
                k--;
            }
        }
        cout<<cnt<<endl;
    }
}
