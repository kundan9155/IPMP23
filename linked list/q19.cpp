
#include <bits/stdc++.h>
using namespace std;


class Node
{
	public:
	int data;
	Node* next;
};


void MoveNode(Node** destRef, Node** sourceRef) ;


void AlternatingSplit(Node* source, Node** aRef,
							Node** bRef)
{
	
	Node* a = NULL;
	Node* b = NULL;
		
	Node* current = source;
	while (current != NULL)
	{
		MoveNode(&a, ¤t); 
		if (current != NULL)
		{
			MoveNode(&b, ¤t); 
		}
	}
	*aRef = a;
	*bRef = b;
}


void MoveNode(Node** destRef, Node** sourceRef)
{
	
	Node* newNode = *sourceRef;
	assert(newNode != NULL);
		
	
	*sourceRef = newNode->next;
		
	
	newNode->next = *destRef;
		

	*destRef = newNode;
}


void push(Node** head_ref, int new_data)
{

	Node* new_node = new Node();
	

	new_node->data = new_data;
	
	
	new_node->next = (*head_ref);	
	

	(*head_ref) = new_node;
}


void printList(Node *node)
{
	while(node!=NULL)
	{
	cout<<node->data<<" ";
	node = node->next;
	}
}

/* Driver code*/
int main()
{
	
	Node* head = NULL;
	Node* a = NULL;
	Node* b = NULL;
	
	
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);								
	push(&head, 0);
	
	cout<<"Original linked List: ";
	printList(head);
	
	
	AlternatingSplit(head, &a, &b);
	
	cout<<"\nResultant Linked List 'a' : ";
	printList(a);		
	
	cout<<"\nResultant Linked List 'b' : ";
	printList(b);		
	
	return 0;
}


