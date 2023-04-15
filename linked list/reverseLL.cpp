#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *create(int n){
    struct node *p, *q, *r;
    int item;
    cout << "Enter the head node data: " << endl;
    cin >> item;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = item;
    p->next = NULL;
    r = p;
    for(int i=1; i<n; i++){
        q = (struct node *)malloc(sizeof(struct node));
        cout << "Enter the next item: " << endl;
        cin >> item;
        q->data = item;
        q->next = NULL;
        r->next = q;
        r = r->next;
    }
    return p;
}

void displayll(struct node *head){
    struct node *q;
    q = head;
    while(q!=NULL){
        cout << q->data << " ";
        q = q->next;
    }
}

void reverse(struct node **head){
    struct node *current = (*head);
    struct node *prev = NULL;
    struct node *next = NULL;
    
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        
        prev = current;
        current = next;
    }
    (*head) = prev;
    // return prev;
}

int main() {
    
    int n;
    cout << "Enter no. of ints: " << endl;
    cin >> n;
    
    struct node *head = create(n);
    // displayll(head);
    reverse(&head);
    displayll(head);

    return 0;
}