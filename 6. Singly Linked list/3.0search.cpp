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

int search(Node *head,int key){
    Node *cur=head;
    int pos=1;
    if(cur==NULL){return -1;}
    while(cur!=NULL){
        if(cur->data==key){return pos;}
        else{pos++; cur=cur->next;}
    }
    return -1;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	cout<<search(head,50);
	return 0;
} 
