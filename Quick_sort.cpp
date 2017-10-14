// C++ implementation for quick sort
#include<iostream>
using namespace std;

// A function to find out pivot point
int partition(int arr[],int low,int high){
    int i=low-1;
    int j=low;
    for(;j<high;j++){
        if(arr[high]<arr[j]){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[high],arr[i+1]);
    return i+1;

}
 
 // quicksort function for sorting array
void quicksort(int arr[],int low,int high){

    if(low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }

}

// Driver program
int main(){
    int arr[]={14,15,13,44,56,23,8,78,36,72};
   int arrsize=sizeof(arr)/sizeof(arr[0])-1;
   quicksort(arr,0,arrsize);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
}
