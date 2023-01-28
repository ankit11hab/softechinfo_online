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
        sort(a, a + n);
        sort(b, b + n-1);
        if(n>2)
        {
            long long long long int X = a[0]-b[0];
            if(a[1]-b[1]!=X)
            {
                if(a[2]-b[1]==X)
                    cout<<-1*X<<endl;
                else
                    cout<<b[1]-a[1]<<endl;
            }
        }
        else
        {
            if(b[n-2]-a[n-1]>0)
                cout<<b[n-2]-a[n-1]<<endl;
            else
                cout<<b[n-2]-a[0]<<endl;
    
    }
}