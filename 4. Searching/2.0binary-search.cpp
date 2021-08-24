#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key){
   int st=0;
   int ed=size-1;
   while(st<=ed){
       int mid=(st+ed)/2;
       if(arr[mid]==key){
           return true;
       }
       else if(key<arr[mid]){ed=mid-1;}
       else{st=mid+1;}
   } 
   return false;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=6;
    bool res=linearsearch(arr,5,key);
    std::cout << res << std::endl;
    return 0;
}