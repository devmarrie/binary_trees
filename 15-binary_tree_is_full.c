#include "binary_trees.h"

/**
 * A function to check if a binary tree is full
 * @tree:  is a pointer to the root node of the tree to check
 * every parent node/internal node has either two or no children
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    if(tree)
    {
        if(tree->left == NULL && tree->right == NULL)
          return 1;
        if (tree->left && tree->right)
          return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
    }
    return 0;
}

