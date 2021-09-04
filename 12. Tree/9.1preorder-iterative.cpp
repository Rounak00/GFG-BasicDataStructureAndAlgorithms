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
   s.push(root);
   while(s.empty()==false){
     Node *cur=s.top();
     cout<<cur->data<<endl;
     s.pop();
     
     if(cur->right!=NULL){s.push(cur->right);}
     if(cur->left!=NULL){s.push(cur->left);}

   }
}

int main(){
    Node *tree=new Node(10);
    tree->left=new Node(20);
    tree->right=new Node(30);
    tree->right->right=new Node(40);
    
    preorder(tree);
}
//time O(n)
//space O(n)