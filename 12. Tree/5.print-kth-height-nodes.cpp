#include<iostream>
#include<algorithm>
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
void he(Node *root,int k){
    if(root==NULL){return;}
    if(k==0){cout<<root->data<<endl;}
    else{
        if(root->left!=NULL){he(root->left,k-1);}
        if(root->right!=NULL){he(root->right,k-1);}
    }
}
int main(){
    Node *tree=new Node(10);
    tree->left=new Node(20);
    tree->right=new Node(30);
    tree->right->right=new Node(40);
    he(tree,1);
}
