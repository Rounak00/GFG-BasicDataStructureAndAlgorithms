// more efficient
#include<iostream>
using namespace std;

int largest(int arr[],int n)
{
  int largest=0;
  for(int i=1;i<n;i++){
      if(arr[i]>arr[largest]){
          largest=i;
      }
  }
return largest;
}

int sl(int arr[],int n)
{
    int larg=largest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[larg]){
            if(res==-1){
                res=i;
            }
            else if(arr[i]>arr[res]){
              res=i;
            }
        }
    }
    return res;
}

int main(){
   const int n=5;
    int arr[n]={1,2,2,4,5};
    
    int result=sl(arr,n);
  cout<<result;
    return 0;
}