#include<iostream>
using namespace std;

void sort(int arr[],int s){
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-1-i;j++){
            if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]); 
            }
        }
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
//T= O(n^2) S=O(1)  