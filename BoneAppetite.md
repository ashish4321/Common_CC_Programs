#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,k,i,b,sum=0,c[10000];
cin>>n;
cin>>k;
for(i=0;i<n;i++)
  cin>>c[i];
  cin>>b;

  for(i=0;i<n;i++)
  {
    sum=sum+c[i];
  }
    sum=sum-c[k];

  if(b==sum/2)
  cout<<"Bon Appetit";
  else
  cout<<abs(sum/2-b);


    return 0;

}
