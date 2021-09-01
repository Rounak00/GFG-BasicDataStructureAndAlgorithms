//method 3:-
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

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *recRevL(Node *start,Node *prev){
    node *head;
   if(start!=NULL){
      recRevL(start->next,start);
      start->next=prev; 
   }
   else{
      head =prev;
   }
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	head=recRevL(head,NULL);
	printlist(head);
	return 0;
} 
