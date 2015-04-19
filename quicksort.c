#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node node;
void push(struct node** head_ref, int new_data)
{
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
void printList(struct node *node)
{
	while(node != NULL)
	{
		printf("%d\n",node->data);
		node = node->next;
	}
	printf("\n");
}
node* getTail(node* cur)
{
 	while(cur!=NULL && cur->next != NULL)
 		cur = cur->next;
 	return cur;
}
node* partition(node* head, node* end,node **newHead,node **newEnd)
{
	node *pivot = end;
	node *prev = NULL;
	*cur = head;
	*tail = pivot;

	while(cur != pivot){
		if(cur->data < pivot->data){
			if((*newHead) == NULL)
				(*newHead) = cur;
			prev = cur;
			cur = cur->next;
		}
		else{
			if(prev)
				prev->next = cur->next;
			node *tmp = cur->next;
			cur->next = NULL;
			tail->next = NULL;
			tail = cur;
			cur = tmp;
		}
	}
	if((*newHead) == NULL)
		(*newHead) = pivot;

	(*newEnd) = tail;
	return pivot;
}
node* quickSortRecur(node* head, node* end){
	if(!head || head == end)
		return head;
	node *newHead = NULL;
	*newEnd = NULL;
}