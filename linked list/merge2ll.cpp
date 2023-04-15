Node* sortedMerge(Node* head1, Node* head2)  
{  
    struct Node *temp1 = head1;
    struct Node *temp2 = head2;
    struct Node *result = NULL;
    
    if(head1==NULL){
        return head2;
    }
    else if(head2==NULL){
        return head1;
    }
    if(temp1->data<=temp2->data){
        result = temp1;
        result->next = sortedMerge(temp1->next, temp2);
        
    }
    else{
        result = temp2;
        result->next = sortedMerge(temp1, temp2->next);
    }
    
    return result;
}