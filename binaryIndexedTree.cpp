Using Binary Indexed Tree, we can do both upgrade and query tasks in O(Logn) time. 
The advantages of Binary Indexed Tree over Segment are, requires less space and very easy to implement.


#include<vector>
#include<algorithm>
#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<cstdlib>
#include<stdlib.h>
#include<cstring>
#include<map>
#include<set>
#include<queue>
#include<string>

using namespace std;
#define lli long long int 
#define fr(a,b,c) for(a=b;a<c;a++)	
#define vi vector<int> 
#define vlli vector<long long int >
#define vpii vector<pair<int,int>>
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define f first
#define s second
#define si(a) scanf("%d",&a)
#define slli(a) scanf("%lld",&a)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
lli mod=1000000007;
int bit[1001];
int v[10001];
void update(int n,int val ,int ind)
{
	int i=ind;
	while(i<=n)
	{
		bit[i]+=val;
		i+=i&-i;
		
	}
}
int query(int i)
{
	int j;
	int sum=0;
	for(j=i;j>=1;j-=j&-j)
	{
		sum+=bit[j];
	}
	return sum;

}
int main()
{
	int i,n;
	cin>>n;
	fr(i,1,n+1)
	{
		cin>>v[i];
		update(n,v[i],i);
	}

	fr(i,0,5)
	{
		cout<<query(i+1)<<endl;
	}

}