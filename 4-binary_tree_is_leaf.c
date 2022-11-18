#include "binary_trees.h"

/**
 * A function that checks if a node is a leaf
 * @node: a pointer to the node to be checked (leaf)
 * Function must return 1 if node is a leaf and 0 if node has no leaf 
 * In this case we will use pre order traversal (NLR)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
    {
        return 0;
    }

    if (node->left == NULL && node->right == NULL)
    {
        return 1;
    }
    return 0;   

}
