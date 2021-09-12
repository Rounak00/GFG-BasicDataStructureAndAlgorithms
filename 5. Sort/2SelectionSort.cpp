#include<iostream>
using namespace std;

void sort(int arr[],int s){
 for(int i=0;i<5-1;i++){
     int id=i;
     for(int j=i+1;j<s;j++){
         if(arr[j]<arr[id]){
             id=j;
         }
     }
     swap(arr[id],arr[i]);
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