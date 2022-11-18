#include "binary_trees.h"

/**
 * A function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if(tree)
    {
        if(tree->left == NULL && tree->right == NULL)
        {
            return 1;
        }
        return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
    }
    return 0;
}