#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,k;
        scanf("%lld",&n);
        scanf("%lld",&k);
        long long int a[n];
        for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]<=k){
                k=k-a[i];
                printf("1");
            }
            else {
                printf("0");

            }
        }
                printf("\n");

    }
    return 0;
}
