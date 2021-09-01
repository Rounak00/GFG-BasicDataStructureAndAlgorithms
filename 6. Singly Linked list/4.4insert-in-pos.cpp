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
Node *ins(Node *head,int pos,int val){
    if(head==NULL){return head;}
    Node *cur=head;
    Node *temp=new Node(val);
    if(pos==1){
        temp->next=cur;
        return temp;
        }
   int thispos=2;
   while(cur!=NULL){
   	if(thispos==pos){
   		temp->next=cur->next;
   		cur->next=temp;
   		return head;
	   }
	else{
	     thispos++;
		 cur=cur->next;   	
	   }
   }
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
   head= ins(head,3,25);
	printlist(head);
	return 0;
} 
