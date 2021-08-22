
#include<iostream>
using namespace std;

int main(){
   const int n=5;
    int arr[n]={1,2,3,4,5};
    int  start=0,end=n-1;
    while(start<=end){ 
        int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
    for(int i=0;i<n;i++){ 
    cout<<arr[i]<<endl;
    }
    return 0;
}