#include "binary_trees.h"

/**
 * A function that deletes an entire binary tree.
 * Do nothing if the tree is NULL
 * @tree: is a pointer to the root node
 * 
 */

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
    return;
}