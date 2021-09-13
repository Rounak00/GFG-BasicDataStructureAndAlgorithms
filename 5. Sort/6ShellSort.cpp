#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
    for(int gap=n/2;gap>=1;gap=gap/2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap; i>=0;i=i-gap){
                if(arr[i+gap]>arr[i]){
                    break;   
                }
                else{
                    swap(arr[i+gap],arr[i]);
                }
            }
        }
    }
}
 
int main() {
	
    int arr[]={8,4,7,9,3,10,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	
	for(int x=0;x<n;x++){
		cout<<arr[x]<<" ";
	}
	    