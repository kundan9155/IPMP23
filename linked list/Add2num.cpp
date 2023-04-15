Node* addTwoNumList(Node* l1, Node* l2) {
    stack<int> s1,s2;
    while(l1!=NULL){
        s1.push(l1->data);
        l1=l1->next;
    }
    while(l2!=NULL){
        s2.push(l2->data);
        l2=l2->next;
    }
    int carry=0;
    Node* result=NULL;
    while(s1.empty()==false || s2.empty()==false){
        int a=0,b=0;
        if(s1.empty()==false){
            a=s1.top();s1.pop();
        }
        if(s2.empty()==false){
            b=s2.top();s2.pop();
        }
        int total=a+b+carry;
        Node* temp=new Node();
        temp->data=total%10;
        carry=total/10;
        if(result==NULL){
            result=temp;
        }else{
            temp->next=result;
            result=temp;
        }
    }
    if(carry!=0){
        Node* temp=new Node();
        temp->data=carry;
        temp->next=result;
        result=temp;
    }
    return result;
}