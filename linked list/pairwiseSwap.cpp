void pairWiseSwap(Node* head)
{
    Node* temp = head;
 
    while (temp != NULL && temp->next != NULL) {

        swap(temp->data,
             temp->next->data);
 
        temp = temp->next->next;
    }
}