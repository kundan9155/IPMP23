Node* segregate(Node *head) {
        
        struct Node *temp = head;
        int count[3] = {0, 0, 0};
        
        while(temp!=NULL){
            count[temp->data]+=1;
            temp = temp->next;
        }
        
        temp = head;
        int i = 0;
        
        while(temp!=NULL){
            if(count[i]==0){
                i++;
            }
            else{
                temp->data = i;
                temp = temp->next;
                count[i]--;
            }
        }
        
        return head;
        
    }