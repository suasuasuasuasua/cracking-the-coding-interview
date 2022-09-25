#ifndef NODE_H__
#define NODE_H__

typedef struct node_t
{
    int value;
    struct node_t* next;
} node;

typedef struct t_node_t
{
    int value;
    struct t_node_t* left;
    struct t_node_t* right;
} t_node;


#endif
