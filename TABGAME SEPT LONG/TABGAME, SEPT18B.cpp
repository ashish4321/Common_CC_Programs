//ASHISH AGARWAL @ashuag007
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t-->0)
	{
	    string s1,s2;
	    cin>>s1;
	    cin>>s2;
	    ll n,m;
	    n=s1.size();
	    m=s2.size();
	    ll a1[n+1]={0},b1[m+1]={0},a2[n],b2[m],a3[n-1],b3[m-1],i,j;
	    for(i=1;i<n+1;i++)
	    {
	        if(s1[i-1]=='1') a1[i]=1;
	        else a1[i]=0;
	    }
	    //for(i=0;i<n+1;i++) cout<<a1[i]<<" ";
	    for(j=1;j<m+1;j++)
	    {
	        if(s2[j-1]=='1') b1[j]=1;
	        else b1[j]=0;
	    }
	    //cout <<endl; for(i=0;i<n+1;i++) cout<<b1[i]<<" "; cout<<endl;
	    a2[0]=1-(b1[1]*a1[1]);
	    for(i=1;i<n;i++)
	    {
	        a2[i]=1-(a2[i-1]*a1[i+1]);
	    }
	    //for(i=0;i<n;i++) cout<<a2[i]<<" ";
	    b2[0]=1-(b1[1]*a1[1]);
	    for(i=1;i<m;i++)
	    {
	        b2[i]=1-(b2[i-1]*b1[i+1]);
	    }
	    // cout <<endl; for(i=0;i<m;i++) cout<<b2[i]<<" "; cout<<endl;
	    a3[0]=1-(a2[1]*b2[1]);
	    for(i=1;i<n;i++)
	    {
	        a3[i]=1-(a3[i-1]*a2[i+1]);
	    }
	    //for(i=0;i<n-1;i++) cout<<a3[i]<<" ";
	    b3[0]=1-(a2[1]*b2[1]);
	    for(i=1;i<m;i++)
	    {
	        b3[i]=1-(b3[i-1]*b2[i+1]);
	    }
	    // cout <<endl; for(i=0;i<m-1;i++) cout<<b3[i]<<" "; cout<<endl;
	    ll q;
	    cin>>q;
	    while(q--)
	    {
	        ll x,y,p,p1;
	        cin>>x>>y;
            if     (x==1) cout<<a2[y-1];
	        else if(y==1) cout<<b2[x-1];
	        else
	        {
    	        if(x==y) cout<<a3[0];
    	        else if(x<y) cout<<a3[y-x];
    	        else if(x>y) cout<<b3[x-y];
	        }
        }
        cout<<endl;
	 }
	return 0;
}
