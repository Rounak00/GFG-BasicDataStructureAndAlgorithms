#include <bits/stdc++.h> 
using namespace std; 

 
class Queue { 
public: 
	int front, size; 
	unsigned cap; 
	int* arr; 
    Queue(int c){
        cap=c;
        front=0;
        size=0;
        arr=new int[c];
    }
bool isempty(){
    if(size==0){return true;}
    return false;
}

bool isfull(){
    if(cap==size){return true;}
    return false;
}
int rear(){
    if(isempty()){return;}
    return(front+size-1)%cap;
}
 int getf(){
     if(isempty()){return;}
     return front;
 }   
 void delf(){
     if(isempty()){return ;}
     else{
         front= (front+1)%cap;
         size--;
     }
 }   
void delr(){
    if(isempty()){return ;}
   else{
       size--;
   }
} 
void insf(int data){
    if(isfull()){return;}
    else{
        front=(front-1+cap)%cap;
        arr[front]=data;
        size++;
    }
}
void insr(int data){
    if(isfull()){return;}
    else{
        int rear=(front+size-1)%cap;
        rear=(rear+1)%cap;
        arr[rear]=data;
    }
}

}; 


 
int main() 
{ 
	Queue* q(10); 

	
	return 0; 
} 