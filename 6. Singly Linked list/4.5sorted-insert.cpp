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
Node *ins(Node *head,Node *temp){
   
    if(head==NULL){
         return temp;
    }
    if(head->data>temp->data){
        temp->next=head;
        return temp;
    }
    Node *cur=head;
    while(cur->next!=NULL && cur->next->data<temp->data){
      cur=cur->next;
    }
    temp->next=cur->next;
    cur->next=temp;
    return head;
}
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	Node *temp=new Node(25);
   head= ins(head,temp);
	printlist(head);
	return 0;
} 
