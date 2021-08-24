#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key){
 for(int i=0;i<size;i++){
    if (arr[i]==key){
        return true;
    }
 }
 return false;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=5;
    bool res=linearsearch(arr,5,key);
    cout<<res;
    return 0;
}