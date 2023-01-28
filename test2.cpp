#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    long long int b[n];
	    for(long long int i = 0;i<n;i++)
	        cin>>a[i];
	    for(long long int i = 0;i<n;i++)
	        cin>>b[i];
	    long long int max = 0, max_count = 0;
	    for(long long int i = 0;i<pow(2,n);i++)
	    {
            int count = 0;
	        long long int curr = pow(2,30)-1;
	        for(long long int j = 0;j<n;j++)
	        {
	            if((i&(1<<j))==0)
	            {
	                curr = curr&a[j];
	            }
	            else
	            {
                    count++;
	                curr = curr&b[j];
	            }
                //cout<<curr<<" ";
	        }
	        if(max==curr)
	        {
	            max = curr;
                if(count<max_count)
	                max_count = count;
	        }
            else if(max<curr)
            {
                max = curr;
                max_count = count;
            }
	    }
	    cout<<max<<" "<<max_count<<endl;
	}
	return 0;
}
