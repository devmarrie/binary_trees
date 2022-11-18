#include "binary_trees.h"

/**
 * A function that counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count = 0;

    if(tree)
    {
        count += (tree->left || tree->right) ? 1 : 0;
        count += binary_tree_nodes(tree->left);
        count += binary_tree_nodes(tree->right);
        return count;
    }
    return 0;
}