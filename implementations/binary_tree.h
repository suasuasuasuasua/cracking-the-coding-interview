#ifndef BINARY_TREE_H__
#define BINARY_TREE_H__

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

typedef struct binary_tree_t
{
    struct t_node_t* root;
    int size;
} binary_tree;

/* Find a node with a given value 
 * */
t_node* search_node_tree(t_node* root, int val);
/* Insert a node with a given value into the tree
 * */
void insert_node_tree(t_node* root, int val);
/* Delete a node from a tree with a given value 
 * */
void delete_node_tree(t_node* root, int val);
/* Find the minimum value in the tree 
 * */
int minimum_tree(t_node* root);
/* Find the maximum value in the tree 
 * */
int maximum_tree(t_node* root);
/* Find the predecessor of a given node 
 * */
t_node* predecessor_tree(t_node* root, t_node* n);
/* Find the successor of a given node 
 * */
t_node* successor_tree(t_node* root, t_node* n);
/* Print the tree structure preorder 
 * */
void print_tree_preorder(t_node* root);
/* Print the tree structure inorder 
 * */
void print_tree_inorder(t_node* root);
/* Print the tree structure postorder 
 * */
void print_tree_postorder(t_node* root);

#endif
