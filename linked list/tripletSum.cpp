bool isSumSorted(Node *headA, Node *headB,
                Node *headC, int givenNumber)
{
    Node *a = headA;
 
    while (a != NULL)
    {
        Node *b = headB;
        Node *c = headC;
 
        while (b != NULL && c != NULL)
        {
      
            int sum = a->data + b->data + c->data;
            if (sum == givenNumber)
            {
            cout << "Triplet Found: " << a->data << " " <<
                                b->data << " " << c->data;
            return true;
            }
 
           
            else if (sum < givenNumber)
                b = b->next;
            else 
                c = c->next;
        }
        a = a->next;
    }
 
    cout << "No such triplet";
    return false;
}