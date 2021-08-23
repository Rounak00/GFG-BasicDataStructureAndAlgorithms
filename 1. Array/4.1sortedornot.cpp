#include<iostream>
using namespace std;

int main(){
   const int n=5;
    int arr[n]={1,20,3,4,5};

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                cout<<"not sorted";
                return 0;
            }
        }
    }
    cout<<"sorted";
    return 0;
}