#include "binary_trees.h"

/**
 * binary_tree_depth - function that gets the depth of a node in a binary tree
 * Return: Depth of the node.
 * @tree: A ptr to the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
