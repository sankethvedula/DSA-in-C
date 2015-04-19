//reverse the alternate nodes and append at the end....
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};
typedef struct node node;
node *head,*tail,*curr;

void create_head(int val)
{
	head = (node*)malloc(sizeof(node));
	head->data = val;
	head->next = NULL;
	curr = head;
	tail = head;
}

void print()
{
	node* trav;
	trav = (node*)malloc(sizeof(node));
	trav = head;
	while(trav->next != NULL)
	{
		printf("%d\n", trav->data);
		trav = trav->next;
	}
	printf("%d\n",trav->data);
}
void push(int val)
{
	node* trav;
	curr = (node*)malloc(sizeof(node));
	trav = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	node* temp;
	temp = (node*)malloc(sizeof(node));
	trav = head;
	while(trav->next != NULL)
	{
		trav = trav->next;
	}
	tail = trav;
	tail->next = temp;
	temp->data = val;
	//printf("%d\n",temp->data);
	temp->next = NULL;
	//temp = tail;
	//printf("%d\n",tail->data);
}

node* arrange(node* head)
{
	node* temp;
	node* prev;
	temp = (node*)malloc(sizeof(node));
	prev = (node*)malloc(sizeof(node));
	prev = head;
	prev->next = temp;
	int count =0;
	while(temp->next != NULL)
	{	

		count++;
		if(count%2 == 0){
			push(temp->data);
			prev->next = temp->next;
		}
	temp = temp->next;
	prev = prev->next;
	temp = prev->next; 
	}

	
}
main(){
	create_head(1);

	push(2);
	arrange(head);
	push(4);
	push(6);

	print();
}