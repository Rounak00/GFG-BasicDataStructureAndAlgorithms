#include<iostream>
#include<algorithm>
#include<climits>
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
int maxi(Node *root){
    if(root==NULL){return INT_MIN;}
    else{
        return max(root->data, max(maxi(root->left),maxi(root->right)));
    }
}
int main(){
    Node *tree=new Node(10);
    tree->left=new Node(20);
    tree->right=new Node(30);
    tree->right->right=new Node(40);
    cout<<maxi(tree);
}
