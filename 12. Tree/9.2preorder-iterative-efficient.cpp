#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int data){
      this->data=data;
      left=NULL;
      right=NULL;
    }
};


void preorder(Node *root){
   stack<Node *>s;
   Node *cur=root;
   while(s.empty()==false||cur!=NULL){
    while(cur!=NULL){
        cout<<cur->data<<" ";
        if(cur->right!=NULL){s.push(cur->right);}
        cur=cur->left;
    }
    if(cur==NULL){
        cur=s.top();
        s.pop();
    }
   }
}

int main(){
    Node *tree=new Node(10);
    tree->left=new Node(20);
     tree->left->left=new Node(30);
    tree->right=new Node(40);
    tree->right->left=new Node(50);
    tree->right->right=new Node(60);
    
    preorder(tree);
}
//time O(n)
//space O(h)