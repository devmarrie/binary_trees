#include "binary_trees.h"

/**
 *  A function that finds the sibling of a node 
 * If they are present at the same level, and their parents are same.
 * Your function must return a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 * @node: is a pointer to the node to find the sibling
 * 
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
      return NULL;
    if (node->parent->left == node)
      return node->parent->right; 
    return node->parent->left;
}