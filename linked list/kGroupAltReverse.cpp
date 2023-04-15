Node *kAltReverse(Node *head, int k)
{
    Node* current = head;
    Node* next;
    Node* prev = NULL;
    int count = 0;
 
    while (current != NULL && count < k)
    {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    count++;
    }
    
    if(head != NULL)
    head->next = current;
 
    count = 0;
    while(count < k-1 && current != NULL )
    {
    current = current->next;
    count++;
    }

    if(current != NULL)
    current->next = kAltReverse(current->next, k);

    return prev;
}