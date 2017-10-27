#include<iostream>
using namespace std;
int main()
{
   int n,i,a[1000],j;
    cin>>n;
    for(i=0;i<n;i++)
      cin>>a[i];

    for(j=1;j<n;j++)
    {
        i=j-1;
        int c;
        c=j;
            while(i>=0&&a[j]<a[i])
            {

                int k;
                k=a[i];
                a[i]=a[j];
                a[j]=k;
                j=i;
                i=j-1;


            }
        j=c;
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }


    }

