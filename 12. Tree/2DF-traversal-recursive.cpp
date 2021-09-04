#include<iostream>
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

void inorder(Node *root){
  if(root==NULL){return;}
  inorder(root->left);
  cout<<root->data<<endl;
  inorder(root->right);
}
void preorder(Node *root){
   if(root==NULL){return ;}
   cout<<root->data<<endl;
   preorder(root->left);
   preorder(root->right);
}
void postorder(Node *root){
    if(root==NULL){return;}
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}
int main(){
    Node *tree=new Node(10);
    tree->left=new Node(20);
    tree->right=new Node(30);
    tree->right->right=new Node(40);
    inorder(tree);
    cout<<endl;
    preorder(tree);
    cout<<endl;
    postorder(tree);
}
