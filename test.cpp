#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    long long long long int t;
    cin>>t;
    while(t--)
    {
        long long long long int n;
        cin>>n;
        long long long long int a[n], b[n-1];
        for(long long long long int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long long long int i = 0;i<n-1;i++)
            cin>>b[i];
        sort(a, a + n, greater<long long int>());
        sort(b, b + n-1,greater<long long int>());
        if(n>2)
        {
            long long long long int X = b[0]-a[0];
            if(b[1]-a[1]!=X)
            {
                if(b[1]-a[2]==X)
                    cout<<X<<endl;
                else
                    cout<<b[1]-a[1]<<endl;
            }
            else
                cout<<X<<endl;
        }
        else
        {
            if(b[0]-a[0]>0)
                cout<<b[0]-a[0]<<endl;
            else
                cout<<b[0]-a[1]<<endl;
        }
    }
}