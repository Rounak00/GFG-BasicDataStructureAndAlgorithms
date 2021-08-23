
#include<iostream>
using namespace std;

int main(){
   const int n=5;
    int arr[n]={1,2,3,4,5};
    int val=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=val;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}