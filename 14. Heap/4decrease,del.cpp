#include <bits/stdc++.h> 
using namespace std; 

class MinHeap{
    int *arr;
    int size;
    int capacity;
    
    public:
    
    MinHeap(int c){
    size = 0; 
    capacity = c; 
    arr = new int[c];
    }

    int left(int i) { return (2*i + 1); } 
    int right(int i) { return (2*i + 2); } 
    int parent(int i) { return (i-1)/2; } 

     void insert(int x){
        if(size==cap){
            cout<<"array is full";
            return;
        }
        size++;
        arr[size-1]=x;
        for(int i=size-1; i!=0&& arr[parent(i)]>arr[i]){
            swap(arr[i], arr[parent(i)]);
            i=parent(i);
        }
    }

    void minhepify(int in){

       int rt=right(in);
       int lt=left(in);
       int smallest=i;
       if(rt<size && arr[rt]<arr[i])
       {
           smallest=rt;
       }
       if(lt<size && arr[lt]<arr[smallest])
       {
           smallest=lt;
       }
       if(smallest!=i)
       {
           swap(arr[i],arr[smallest]);
           minheapify(smallest);
       }

    }
     int extractMin() 
    { 
    if (size <= 0) 
        return INT_MAX; 
    if (size == 1) 
    { 
        size--; 
        return arr[0]; 
    }  
    swap(arr[0],arr[size-1]);
    size--; 
    minHeapify(0); 
  
    return arr[size]; 
    } 

     void decreaseKey(int i, int x) 
    { 
    arr[i] = x; 
    while (i != 0 && arr[parent(i)] > arr[i]) 
    { 
       swap(arr[i], arr[parent(i)]); 
       i = parent(i); 
    } 
    }
      void deleteKey(int i) 
    { 
        decreaseKey(i, INT_MIN); 
        extractMin(); 
    }
    
};


int main() 
{ 
    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.deleteKey(0);
    h.insert(15);
    h.insert(20);
    cout << h.extractMin() << endl;
    h.decreaseKey(2, 1);
    cout << h.extractMin() << endl;
    return 0;
 
} 
//decreease t= o(h) s=o(1)
//delete key t= decrease+extract= O(h)+O(log n)  s= heapify recursive or iterrative means o(log n) or O(1)