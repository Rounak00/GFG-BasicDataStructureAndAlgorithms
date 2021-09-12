#include<iostream>
using namespace std;

void sort(int arr[],int s){
   for(int i=1;i<s;i++){
       int c=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>c){
          arr[j+1]=arr[j];
          j--;
       }
       arr[j+1]=c;
   }
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}    
}

int main(){
    int arr[5]={9,1,7,3,4};
    sort(arr,5);
    return 0;
}    

// T=O(n^2) s=O(1)