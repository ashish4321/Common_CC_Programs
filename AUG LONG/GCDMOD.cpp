#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mulmod(ll a, ll b, ll mod)
{
    ll res = 0;
    a = a % mod;
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res + a) % mod;
         a = (a * 2) % mod;
        b /= 2;
    }

    // Return result
    return res % mod;
}
ll power_rem(ll a,ll b,ll n)
{
    ll x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = mulmod(x,y,n); // multiplying with base
        }
        y =mulmod(y,y,n); // squaring the base
        b /= 2;
    }
    return x % n;
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
	    ll p,q,x,p1,q1,y=1000000007;
	    cin>>p>>q>>x;
	    if(p==q)
	    cout<<(power_rem(p,x,y)+power_rem(p,x,y))%y<<endl;
	    else
	    {
    	    p1=(power_rem(p,x,p-q)+power_rem(q,x,p-q))%(p-q);
    	    q1=p-q;
    	     while (q1 > 0)
            {
               ll r = p1%q1;
                p1=q1;
                q1 = r;
           }
    	    ll ans=p1%y;
    	    cout<<ans<<endl;
	    }
	}
	return 0;
}
