#include<iostream>
using namespace std;
int main()
{
   int n,i,a[100],j,p;
   cin>>n;
   for(i=0;i<n;i++)
      cin>>a[i];

      p=a[0];
      i=1;
      j=n-1;
      while(i<=j)
      {
        if(a[i]<=a[0])
          i++;
          else if(a[i]>a[0])
             {
               if(a[j]>=a[0])
                 j--;

              else if(a[j]<a[0])
              {
                 int k;
                 k=a[i];
                 a[i]=a[j];
                 a[j]=k;
              }


             }



      }
      int c;
       c=a[0];
       a[0]=a[j];
       a[j]=c;

      for(i=0;i<n;i++)
      cout<<a[i]<<" ";

}
