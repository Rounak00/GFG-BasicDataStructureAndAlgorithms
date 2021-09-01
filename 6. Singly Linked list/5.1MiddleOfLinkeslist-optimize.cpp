//Efficient approach:-
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
void midd(Node *head){
    Node *fast=head;
	Node *slow=head;
    if(head==NULL){cout<<-1;}
    if(head->next==NULL){cout<< 1;}
   
    while(fast!=NULL || fast->next!=NULL){
       fast=fast->next->next;
       slow=slow->next;
    }
    cout<< slow->data;
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
