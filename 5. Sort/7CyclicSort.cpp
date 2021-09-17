#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
   int i=0;
   while(i<n){
       int cur=arr[i]-1;
       if(arr[i]!=arr[cur]){
           swap(arr[i],arr[cur]);
       }
       else{
           i++;
       }
   }
}
 
int main() {
	
    int arr[]={4,1,2,3,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	
	for(int x=0;x<n;x++){
		cout<<arr[x]<<" ";
	}
}