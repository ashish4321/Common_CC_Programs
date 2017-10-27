#include<iostream>
using namespace std;
int maxSum(int *a,int n){
	int curr_sum=a[0];
	int max_sum=curr_sum;
	for(int i=1;i<n;i++)
	{
		if(curr_sum>0)
			curr_sum+=a[i];
		else
			curr_sum=a[i];
		if(curr_sum>max_sum)
			max_sum=curr_sum;
	}
  return max_sum;
}


/* Driver program to test above function */
int main()
{
  int n;
  cout<<"Enter number of elements";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Maximum Sum is "<<maxSum(arr, n);
  getchar();
  return 0;
}
