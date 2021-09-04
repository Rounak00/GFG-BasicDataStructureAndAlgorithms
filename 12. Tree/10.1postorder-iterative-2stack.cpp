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
   stack<Node *>s1,s2;
   s1.push(root);
   while(s1.empty()==false){
       Node *cur=s1.top();
       s1.pop();
       s2.push(cur);
       if(cur->left!=NULL){
         s1.push(cur->left);
       }
       if(cur->right!=NULL){
         s1.push(cur->right);
       }
   }
   while(s2.empty==false){
       cout<<s2.pop()->data<<" ";
       s2.pop();
   }

   
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
//time O(n)
//space O(2n)