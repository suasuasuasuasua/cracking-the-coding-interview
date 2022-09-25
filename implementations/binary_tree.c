#include "binary_tree.h"

/* Find a node with a given value 
 * */
t_node* search_node_tree(t_node* root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (val == root->value)
    {
        return root;
    }
    else if (val < root->value)
    {
        root = root->left;
    }
    else if (val > root->value)
    {
        root = root->right;
    }
    return search_node_tree(root, val);
}
/* Insert a node with a given value into the tree
 * */
void insert_node_tree(t_node* root, int val)
{
    if (root == NULL)
    {
        t_node* new_node = (t_node*)malloc(sizeof(t_node));
        new_node->value = val;
        new_node->left = new_node->right = NULL;
        root = new_node;
        return;
    }
    if (val < root->value)
    {
        printf("left\n");
        root = root->left;
    }
    else if (val >= root->value)
    {
        printf("right\n");
        root = root->right;
    }
    insert_node_tree(root, val);
}
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
void print_tree_preorder(t_node* root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->value);
    print_tree_preorder(root->left);
    print_tree_preorder(root->right);
}
/* Print the tree structure inorder 
 * */
void print_tree_inorder(t_node* root);
/* Print the tree structure postorder 
 * */
void print_tree_postorder(t_node* root);
