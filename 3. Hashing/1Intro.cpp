/*
we use hashing bcz it is Search,insert and deletion timecomplexity is O(1)
it always have unique values
it is basically a array that store that value is true or false
*/
//Q. there are 20 employee and perform some hashing operations
#include<iostream>
using namespace std;

struct hs{
int table[20]={0};
  void insert(int i){
        table[i]=1;
    }
    
    void del(int i){
        table[i]=0;
    }
    
    int search(int i){
        return table[i];
    }
};

int main(){
     hs dat;
    dat.insert(10);
    dat.insert(2);
    dat.insert(15);
    cout<<dat.search(10)<<endl;
    cout<<dat.search(2)<<endl;
    dat.del(15);
    cout<<dat.search(15)<<endl;
    
    return 0; 
}
/*
if we know keys in advace then we do this type of hashing that called perfect hashing.

if we dont know keys in advance then we will do chaining or openaddressing
*/
//openaddressing have 3 parts linear probling,quadratic probling, double hashing
