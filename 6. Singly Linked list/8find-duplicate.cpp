
Node *dupli(Node *head){
    if(head==NULL || head->next==NULL){return head;}
    Node *cur=head;
    while(cur!=NULL && cur->next!=NULL){
        if(cur->data==cur->next->data){
            Node *temp=cur->next;
            cur->next=cur->next->next;
            delete(temp);
        }
        else{
            cur=cur->next;
        }
    }
}