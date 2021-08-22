// more efficient
#include<iostream>
using namespace std;

int main(){
   const int n=5;
    int arr[n]={1,2,2,4,5};
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }

    for(int i=0;i<res;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}