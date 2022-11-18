#include "binary_trees.h"

/**
 * Function that goes through a binary tree using pre-order traversal
 * Pre-order(NLR)
 * @tree: is the pointer to the root node to be traversed
 * @func: is a pointer to a function to call each node
 * @int: value in the node passed in the function
 * if tree or func is NULL return
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if(tree && func)
    {
        func(tree->n);
        binary_tree_preorder(tree->left, func);
        binary_tree_preorder(tree->right, func);
    }
}