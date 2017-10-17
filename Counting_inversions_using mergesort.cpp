#include <bits/stdc++.h>
using namespace std;


int merge(int arr[],int low,int high,int m,int t[]){
	int i=low,j=m;
	int k=low;  //to store values in resultant merged array
	int c=0;
	while(j<=high){
		if(i==m) break;
		//if element in left sub-array is smaller than simply placing it in sorted array
		if(arr[i]<=arr[j]){ 
			t[k]=arr[i];
			k++;
			i++;
		}
		//else placing element from right sub array in sorted array and updating the inversion count
		else{
			t[k]=arr[j];
			k++;
			j++;
			c+=(m-i);
		}
	}
	while(1){
		if(i==m) break;
		t[k]=arr[i];
		k++; 
		i++;
	}
	while(j<=high){
		t[k]=arr[j];
		k++; 
		j++;
	}
	for(i=low;i<=high;i++)
		arr[i]=t[i];
	return c;
}

int count_inv(int arr[],int low,int high,int t[]){
	int m,a=0,b=0,c=0,inv=0;
	if(high>low){
		m=(high+low)/2;
		a+=count_inv(arr,low,m,t); //applying merge sort and countin inversions for left sub-array
		b+=count_inv(arr,m+1,high,t); //applying merge sort and countin inversions for right sub-array
		c+=merge(arr,low,high,m+1,t); //merging left and right sub-array and counting inversions while doing that
		inv+=a+b+c; //summing up all the inversions
	}
	return inv;
}

//Main Driver Function
int main(){
	int n;
	cin>>n;
	int a[n];
	int *t = (int *)malloc(sizeof(int)*n);
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<count_inv(a,0,n-1,t);
	cout<<endl;
}