#include<bits/stdc++.h>
using namespace std;
#include <algorithm>
typedef long long int ll;
#define pri(x) printf("%lld\n", x)
#define scn(x) scanf("%lld", &x)
#define pb push_back
#define mp make_pair
#define loop(s) for(ll i = 0; i< s; i++)

bool sort_ashu(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    if (a.second != b.second) {
      return a.second < b.second;
    }
    return a.first < b.first;
}
int main()
{
    ll p,s,m,n;
    scn(p);
    scn(s);
    n=p;
    ll arr[n],t=0;
    vector < pair <ll,ll> > vect1;
    while(p--)
    {
        vector < pair <ll,ll> > vect;
        ll subt[s],noc[s],i,j,cnt=0;
        loop(s) scn(subt[i]);
        loop(s) scn(noc[i]);
        loop(s)
            vect.pb( mp(subt[i],noc[i]) );
        sort(vect.begin(), vect.end());
        loop(s)
        {
            if(vect[i].second>vect[i+1].second)
            cnt++;
        }
        arr[t]=cnt;
        t++;
        vect.clear();
    }
    for (m=0; m<n; m++)
        vect1.pb( mp(m+1,arr[m]) );
    sort(vect1.begin(), vect1.end(),sort_ashu );
    for (m=0; m<n; m++)
    {
        pri(vect1[m].first); 
    }
    return 0;
}