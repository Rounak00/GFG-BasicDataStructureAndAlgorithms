#include<iostream>
using namespace std;


void merge(int arr[], int l, int m, int h){

    int n1=m-l+1;
	int n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
}
void sort(int arr[],int l, int h){
  if(l<h)
  {
    int mid=(h+l)/2;
    sort(arr, l, mid);
    sort(arr, mid+1, h);
    merge(arr, l, mid, h);
  }   
}

int main(){
    int arr[5]={9,1,7,3,4};
    sort(arr,0,4);
    for(int i=0;i<5;i++){
    	cout<<arr[i]<<" ";
	}
    
    return 0;
}    

// T=O(nlogn) s=O(n)