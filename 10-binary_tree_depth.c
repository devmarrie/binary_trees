#include "binary_trees.h"

/**
 * A function that measures the depth of a node in a binary tree
 * @tree: Apointer to the node to measure depth
 * The depth of a node is the number of edges
 * present in path from the root node of a tree to that node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    return (tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0 ;
}