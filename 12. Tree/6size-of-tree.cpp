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
int si(Node *root){
    if(root==NULL){return 0;}
    else{
        return 1+(si(root->left)+si(root->right));
    }
}
int main(){
    Node *tree=new Node(10);
    tree->left=new Node(20);
    tree->right=new Node(30);
    tree->right->right=new Node(40);
    cout<<si(tree);
}
