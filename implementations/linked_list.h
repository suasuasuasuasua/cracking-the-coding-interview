#ifndef LINKED_LIST_H__
#define LINKED_LIST_H__

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

typedef struct linked_list_t
{
    struct node_t* head;
    struct node_t* tail;
    int size;
} linked_list;

/* Given a value, search for the corresponding node in the linked list
 * */
node* search_node_llist(linked_list* llist, int val);
/* Create a new node with the value passed in the parameter 
 * */
void insert_node_llist(linked_list* llist, int val);
/* Find the first node with the given value and delete it from the list 
 * */
void delete_node_llist(linked_list* llist, int val);
/* Print the linked list starting from the head 
 * */
void print_llist(linked_list* llist);

#endif
