#include <bits/stdc++.h>
using namespace std;

int iPartition(int arr[], int l, int h)
{   
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void qSort(int arr[],int l,int h){
    if(l<h){
        int p=iPartition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}
 
int main() {
	
    int arr[]={8,4,7,9,3,10,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	qSort(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";
}

//T= O(n^2) S=O(logn)

/*
If we do with hoare:-
int partition(int a[], int l, int h){
    int p=a[l];
    int i=l-1; int j=h-1;
    while(true){
        do{
            i++;
        }while(a[i]<p);
        do{
           j++;
        }while(a[j]>p);
        if(i>=j)return j;
        swap(a[i],a[j]);
    }
}
void qSort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        qSort(arr,l,p);
        qSort(arr,p+1,h);
    }
}

*/