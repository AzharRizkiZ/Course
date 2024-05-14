#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
	int value;
	struct node* next;
}*head = NULL, *tail = NULL;

struct Node *createnewNode(int value){
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->value = value;
	newNode->next = NULL;
	
	return newNode;
}

void pushHead(struct Node *newNode, int value){
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}else {
		newNode->next = head;
		head = newNode;
	}
}




int main(){
	pushHead(9);
	return 0;
}
