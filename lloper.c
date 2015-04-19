#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
typedef struct node node;

// Several operations on linked lists
/*------------Count()--------------*/

int Count(struct node* head, int searchFor){
	node* current = head;
	int count = 0;
	while(current->NULL){
		if(current->data == searchFor)
			count++;
		current = current->next;
	}
	return count;
}
/*--------Return the nth data element---------*/
int GetNth(node* head, int index)
{
	struct node* current = head;
	int count = 0;
	while(current != NULL){
		if(count == index) return(current->data);
		count++;
		current = current->next;
	}

}


/*----------Delete the list and point the head pointer to NULL-----------*/
void DeleteList(node** headRef){
	node* current = *headRef;
	node* next;

	while(current != NULL){
		next = current->next;
		free(current);
		current = next;
	}
	*headRef = NULL;
}

/*-------------Pop the data from the head node,delet node,advance head to the next pointer in line---------------------*/
int Pop(node* headRef){
	node* head;
	int result;

	head = *headRef;
    result = head->data;
    *headRef = head->next;
    return(result);
}

/*---------Insert Nth node----------------*/

void InsertNth(node** headRef, int index, int data){
	if(index == 0) Push(headRef,data);
	else{
		node* current = *headRef;
		int i;
		for(i =0; i<index-1; i++){
			current = current->next;
		}
		Push(&(current->next), data);
	}
}

/*----------Iterate through the list and Insert the element at the right place-----------------*/
void SortedInsert(node** headRef, node* newNode){
	if(*headRef == NULL || (*headRef)->data >= newNode->data){
		newNode->next = *headRef;
		*headRef = newNode;
	}
	else{
		node* current = *headRef;
		while(current->next != NULL && current->next->data < newNode->data){
			current = current->next;
		}
		newNode->next = current->next;
		current->next = newNode;
	}
}

/*---------------Append nodes------------------*/
void Append(node** aRef, node** bRef){
	node* current;
	if(*aRef == NULL){
		*aRef = *bRef;
	}
	else{
		current = *aRef;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = *bRef;
	}
	*bRef = NULL;
}

/*----------------FrontBackSplit()----------------*/

void FrontBackSplit(node* source, node** frontRef, node** backRef){
	int len = Length(source);
	int i;
	node* current = source;
	if(len < 2){
		*frontRef = source;
		*backRef = NULL;
	}
	else{
		int hopCount = (len-1)/2;
		for(i =0; i<hopCount; i++){
			current = current->next;
		}
	*frontRef = source;
	*backRef = current->next;
	current->next = NULL;
	}
}

/*------------Remove Duplicates-----------------
void RemoveDuplicaates(node* head)
----------*/