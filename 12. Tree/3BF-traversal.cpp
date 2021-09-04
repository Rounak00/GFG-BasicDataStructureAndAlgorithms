#include<iostream>
#include<queue>
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
void bf(Node *root){
    queue<Node*>q;
    if(root==NULL){cout<<"Tree is empty"; return;}
    else{
        Node *cur=root;
        q.push(cur);
        while(q.empty()==false || cur!=NULL){
            cur=q.front();
            q.pop();
            cout<<cur->data<<" ";
            if(cur->left!=NULL){q.push(cur->left);}
            if(cur->right!=NULL){q.push(cur->right);}
        }
    }
    
}
int main(){
    Node *tree=new Node(10);
    tree->left=new Node(20);
    tree->right=new Node(30);
    tree->right->right=new Node(40);
    bf(root);
}
