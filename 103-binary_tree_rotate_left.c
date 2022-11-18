#include "binary_trees.h"

/**
 * Description: AVL tree is a self-balancing binary search tree 
 *              in which each node maintains extra information 
 *              called a balance factor whose value is either -1, 0 or +1.
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	tree->parent = tree->right;
	if (tree->right)
	{
		tree->right = tree->right->left;
		tree->parent->left = tree;
		tree->parent->parent = NULL;
		if (tree->right)
			tree->right->parent = tree;
		return (tree->parent);
	}
	return (tree);
}
