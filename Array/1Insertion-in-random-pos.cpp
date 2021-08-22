#include<iostream>
using namespace std;

int insert(int arr[], int n, int pos, int val){
        for(int i=n-1;i>=pos-1;i--){
            arr[i]=arr[i-1];
        }
        arr[pos-1]=val;
       
}

int main(){
    int arr[5]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0] );
    cout<<n;
 int pos;
 cout<<"choose a position less then 5 or 5-->"<<endl;
 cin>>pos;
 if(pos>5){
 	cout<<"not calculate"<<endl;
 	return 0;
 }
 int val;
 cout<<"Enter your value"<<endl;
 cin>>val;
     insert(arr,n,pos,val);

  for(int j=0;j<n;j++){
      cout<<arr[j]<<endl;
  }   
  return 0;
}