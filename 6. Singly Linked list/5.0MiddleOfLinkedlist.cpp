//Naive approach:-
#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int midd(Node *head){
    if(head==NULL){return -1;}
    int count=0; 
    Node *cur;
    for(cur=head;cur!=NULL;cur=cur->next){
      count++;   
    }
    cout<<count;

}


int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
    midd(head);

	return 0;
} 
