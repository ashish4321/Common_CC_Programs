#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
	    long long int n,h,i;
	    long long int k,x,low=1,mid,high;
	    cin>>n>>h;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    low=1;
	    high=a[n-1];
	    while(1)
	    {
	        mid=(low+high)/2;
	        if(mid==low)
	        break;
	        long long int count=0;
	        for(i=0;i<n;i++)
	        {
	            if(a[i]<=mid)
	            count++;
	            else if((a[i]%mid)==0)
	            count+=a[i]/mid;
	            else
	            count+=(a[i]/mid)+1;
	        }
	        if(count<=h)
	        {
	            low=low;
	            high=mid;
	        }
	        else
	        {
	            low=mid;
	            high=high;
	        }
	    }
	    cout<<mid+1<<endl;
	}
	return 0;
}
