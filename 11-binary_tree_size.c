#include "binary_trees.h"

/**
 * A function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size.
 * we have to count the total number of nodes in a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    if(tree)
    {
        return binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
    }
    return 0;
}