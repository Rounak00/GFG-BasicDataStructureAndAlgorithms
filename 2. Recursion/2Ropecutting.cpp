#include<bits/stdc++.h>
using namespace std;

int maxp(int n, int a,int b, int c){
    if(n==0){return 0;}
    if(n<0){return -1;}
    int res=max(maxp(n-a, a, b, c), 
	          max(maxp(n-b, a, b, c), 
	          maxp(n-c, a, b, c)));
    if(res==-1){return -1;}
    return res+1;
}

int main(){
    
   cout<< maxp(5,2,5,1);
    return 0;
}