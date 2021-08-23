
#include<iostream>
using namespace std;


int main(){
    int arr[]={1,8,2,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int val=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>arr[val]){
         val=i;
       }
    }
    cout<<"index is val";
    
}