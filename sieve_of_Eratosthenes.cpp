#include<bits/stdc++.h>

using namespace std;

unsigned long long int i,j,z,t,n;
typedef long long int lli;
void  sieve_of_Eratosthenes(lli);

int main()
{
    cin>>n;
    cout<<"All prime numbers till "<<n<<" :\n";
    sieve_of_Eratosthenes(n);
    return 0;
}

void sieve_of_Eratosthenes(lli n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(lli p=2; p*p<=n; p++)
    {
        if(prime[p]==true)
        {
            for(i=p*2; i<=n; i+=p)
                prime[i]=false;
        }
    }
    
    // printing the number if prime[] is true
    for(lli p=2;p<=n;p++)
    {
        if(prime[p])
            cout<<p<<"\t";
    }
}

