#include <stdio.h>
#include <stdlib.h>
struct node
{	
	int x;
	struct node *next;
};
typedef struct node node;
node *current, *head;
void create_head(int data){
	//shit I forgot to initialize --> don't forget assole!!
	head = (node*)malloc(sizeof(node));
	head->x = data;
	head->next = NULL;
	current = head;
}

void print()
{
	node* trav;
	trav = (node*)malloc(sizeof(node));
	//printf("hey");
	trav = head;
	//printf("%d\n",trav->x);
	//don't try to access memory which you havent created...Segmentation faults!!
	while(trav->next != NULL)
	{
		printf("%d\n",trav->x);
		trav = trav->next;
		//printf("hey\n");
	}
	printf("%d\n",trav->x);
}

void push(int value){
	node* temp;
	node* curr;
	curr = (node*)malloc(sizeof(node));
	temp = (node*)malloc(sizeof(node));
	curr = head;
	while(curr->next != NULL){
		curr = curr->next;
	}

	temp->x = value;
	curr->next = temp;
	temp->next = NULL;	
	temp = curr;
}

void insert(int data, int pos){
	node* temp;
	node* trav;
	temp = (node*)malloc(sizeof(node));
	trav = (node*)malloc(sizeof(node));
	trav = head;
	//temp = head;
	int count = 0;
	while(trav->next!=NULL && count == pos){
		trav = trav->next;
		count++;
	}
	temp->next = trav->next;
	temp->x = data;
	trav->next = temp;
}
 int main()
 {	
 	create_head(1);
 	push(2);
 	push(3);
 	insert(15,2);
 	push(10);
 	print();
 	//insert(1,2);
 	return 0;
 	//struct node *root;
 }