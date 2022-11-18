#include "binary_trees.h"

/**
 *A function that creates a perfect binary tree
 *  @tree: is a pointer to the root node of the tree to check 
 * every internal node has exactly two child nodes and
 * all the leaf nodes are at the same level(depth)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    binary_tree_t *l, *r;

    if (tree == NULL)
		return (0);
	l = tree->left;
	r = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (l == NULL || r == NULL)
		return (0);
	if (binary_tree_height(l) == binary_tree_height(r))
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
			return (1);
	}
    return 0;
}

/**
 *A function that measures the height of a binary tree
 *  @tree: pointer root node of the tree to measure height.
 * @?: RESULT = (COND) ? ( STATEMEN IF TRUE) : (STATEMENT IF FALSE)
 * Return 0 if tree is null
 * height of a tree is the number of nodes from the root node to the deepest leaf
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t h_left = 0, h_right = 0;
    if (tree)
    {
        
        h_left = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;
        h_right = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;

        return (h_left > h_right) ? h_left : h_right;  
    }
    return 0;
} 

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