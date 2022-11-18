#include "binary_trees.h"

/**
 * Checks if a given node is a root
 *  @node: is the pointer to the node to check
 * Returns 1 if node is a root otherwise returns 0
 * Returns 0 if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
    if(node == NULL || node->parent != NULL)
    {
        return 0;
    }
    
    return 1;
}