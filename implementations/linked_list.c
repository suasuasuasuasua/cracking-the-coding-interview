#include "linked_list.h"

/* Given a value, search for the corresponding node in the linked list
 * */
node* search_node_llist(linked_list* llist, int val)
{
    node* currentNode = llist->head;
    node* target;
    while (currentNode != NULL)
    {
        if (currentNode->value == val)
        {
            target = currentNode;
            break;
        }
        currentNode = currentNode->next;
    }
    return target;
}

/* Create a new node with the value passed in the parameter 
 * */
void insert_node_llist(linked_list* llist, int val)
{
    llist->size++;
    node *newNode;
    newNode = (node *) malloc(sizeof(node));
    newNode->value = val;
    newNode->next = NULL;
    /* V
     * 1
     * ^
     * If the linked list is empty, then set the head and tail
     * to the new node 
     * */
    if (llist->head == NULL && llist->tail == NULL)
    {
        llist->head = newNode;
        llist->tail = newNode;
        return;
    }
    /* v     V         v
     * 1     1 > 2     1 > 2 > 3
     * ^     ^                 ^
     * Otherwise, add the new pointer to the end of the list
     * (as the tail pointer's next), then set the new pointer as the tail 
     * */
    llist->tail->next = newNode;
    llist->tail = newNode;
}

/* Find the first node with the given value and delete it from the list 
 * */
void delete_node_llist(linked_list* llist, int val)
{
    /* If the value is the head node, then delete the head node 
     * and reset the head
     * Let val = 1
     * v            v
     * 1 > 2 > 3    2 > 3
     *         ^        ^
     */
    if (llist->head != NULL && llist->head->value == val)
    {
        node* deleted = llist->head;
        llist->head = llist->head->next;
        free(deleted);
        llist->size--;
        return;
    }

    node* prevNode = llist->head;
    node* currentNode;
    node* nextNode;

    while (prevNode != NULL)
    {
        if (prevNode->next != NULL)
        {
            currentNode = prevNode->next;
            nextNode = prevNode->next->next;
            if (currentNode->value == val)
            {
                /* If the value is at the end, delete the node and reset the tail
                 * v            v    
                 * 1 > 2 > 3    1 > 2
                 * ^       ^        ^ */
                if (nextNode == NULL) llist->tail  = prevNode;
                /* Else, If the value is somewhere in the middle of the list,
                 * use the previous node to jump OVER to the next node
                 * v            v           v
                 * 1 > 2 > 3    1 > 2 > 3   1 > 3
                 *         ^    \______/^       ^ */
                prevNode->next = nextNode;
                llist->size--;
                free(currentNode);
                return;
            }
        }
        prevNode = prevNode->next; // Move to the next node
    }

}

/* Print the linked list starting from the head 
 * */
void print_llist(linked_list* llist)
{
    node* currentNode = llist->head;
    /* Print each node in the linked list, starting at the head of the list 
     * */
    while (currentNode != NULL) {
        printf("%d ", currentNode->value);
        currentNode = currentNode->next;
    }
    printf("\n");
}
