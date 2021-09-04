#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int data){
      this->data=data;
      prev=NULL;
      next=NULL;
    }
};
struct deq{
    Node *head=NULL;
    Node *tail=NULL;

    void getf(){
      cout<<head->data<<endl;
    }
    int getr(){
      cout<<tail->data<<endl;
    }
    void pr(){
        Node *cur=head;
        cout<<endl;
        while(cur!=NULL){
            cout<<cur->data;
            cur=cur->next;
        }
    }
    void insf(int data){
        Node *temp= new Node(data);
        if(head==NULL && tail==NULL){
           head=temp;
           tail=temp;
        }
        else{
            temp->next=head->prev;
            head->prev=temp;
            head=temp;
        }
    }
    void insr(int data){
         Node *temp= new Node(data);
       if(head==NULL && tail==NULL){ 
           head=temp; 
           tail=temp;}
       else{
         temp->prev=tail;
         tail=temp;
        }
    }
    void delf(){
       if(head==NULL && tail==NULL){
           cout<<"is empty"<<endl;
       }
       else{
           Node *temp=head;
           head=head->next;
           head->prev=NULL;
           temp->next=NULL;
           cout<<temp->data<<" deleted"<<endl;
           delete(temp);
       }
    }
    void delr(){
      if(head==NULL && tail==NULL){
           cout<<"is empty"<<endl;
       }
       else{
           Node *temp=tail;
           tail=tail->prev;
           tail->next=NULL;
           temp->prev=NULL;
           cout<<temp->data<<" is deleted"<<endl;
           delete(temp);
       }
    }
};

int main(){
    deq d;
    d.insr(10);
    d.insf(5);
    d.pr();
    d.insr(20);
    d.insr(30);
    d.insf(2);
    d.pr();
    d.getf();
    d.getr();
    d.delf();
    d.pr();
    d.delr();
    d.pr();
}
