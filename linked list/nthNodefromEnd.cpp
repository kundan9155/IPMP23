int getNthFromLast(Node *head, int n)
{
       struct Node *p = head;
       int l=0;
       while(p!=NULL){
           l++;
           p = p->next;
       }
       if(l<n){
           return -1;
       }
       
       p = head;
       
       for(int i=1; i<l-n+1; i++){
           p = p->next;
       }
       
       int ans = p->data;
       
       return ans;
       
}