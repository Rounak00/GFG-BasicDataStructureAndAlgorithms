#include<iostream>
#include<algorithm>
#include<stack>
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
void inorder(Node *root){
    stack<Node*>s;
    Node *cur;
    cur=root;
    while(s.empty()==false || cur!=NULL){
        while(cur!=NULL){
            s.push(cur);
             cur=cur->left;
        }
        cur=s.top();
        s.pop();
        cout<<cur->data<<" ";
        cur=cur->right;
    }
}
int main(){
    Node *tree=new Node(10);
    tree->left=new Node(20);
    tree->right=new Node(30);
    tree->right->right=new Node(40);
    inorder(tree);
}
//Time= O(N) space=O(H)
