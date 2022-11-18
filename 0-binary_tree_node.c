#include "binary_trees.h"

/**
 * creates a node 
 * @parent - is a pointer to the parent node of the node to create.
 * @value - is the value to put in the new node.
 * The node created does not have a child
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
    {
        return NULL;
    } else {
        node->n = value;
        node->parent = parent;
        node->left = NULL;
        node->right = NULL;
    }
    
    return node;
}