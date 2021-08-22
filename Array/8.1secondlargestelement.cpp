// more efficient
#include<iostream>
using namespace std;



int main(){
   const int n=5;
    int arr[n]={1,2,2,4,5};
    int res=-1;
    int largest=0;

    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
          if(res==-1|| arr[i]>arr[res]){
              res=i;
          }
        }
    }
    cout<< res;
    return 0;
}