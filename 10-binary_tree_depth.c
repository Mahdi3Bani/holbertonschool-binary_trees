#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: return depth or 0 if null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
