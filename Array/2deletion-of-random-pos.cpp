#include<iostream>
using namespace std;

int del(int arr[],int n,int pos){
    for(int i=0;i<n;i++){
        if(i==pos-1){
            arr[i]=0;
        }
    }
    
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int pos;
    cout<<"enter the pos where need to delete"<<endl;
    cin>>pos;

    del(arr,n,pos);
   
   for(int i=0;i<n;i++){
       cout<<arr[i]<<endl;
   }
}