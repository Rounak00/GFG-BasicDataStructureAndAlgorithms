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


void postorder(Node *root){
   stack<Node *>s1;
   

   
}

int main(){
    Node *tree=new Node(10);
    tree->left=new Node(20);
     tree->left->left=new Node(30);
    tree->right=new Node(40);
    tree->right->left=new Node(50);
    tree->right->right=new Node(60);
    
    postorder(tree);
}
//time O(2n)
//space O(n)