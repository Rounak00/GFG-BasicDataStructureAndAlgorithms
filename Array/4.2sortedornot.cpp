// more efficient
#include<iostream>
using namespace std;

int main(){
   const int n=5;
    int arr[n]={1,20,3,4,5};

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<"not sorted";
            return 0;
        }
        
    }
    cout<<"sorted";
    return 0;
}