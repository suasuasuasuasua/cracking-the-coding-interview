#ifndef LINKED_LIST_H__
#define LINKED_LIST_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct node_t
{
    int value;
    struct node_t* next;
} node;

typedef struct linked_list_t
{
    struct node_t* head;
    struct node_t* tail;
    int size;
} linked_list;

/* Given a value, search for the corresponding node in the linked list
 * */
node* searchNode(linked_list* llist, int val);
/* Create a new node with the value passed in the parameter 
 * */
void insertNode(linked_list* llist, int val);

/* Find the first node with the given value and delete it from the list 
 * */
void deleteNode(linked_list* llist, int val);

/* Print the linked list starting from the head 
 * */
void printList(linked_list* llist);

#endif
