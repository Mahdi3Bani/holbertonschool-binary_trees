#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: return height or 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (binary_tree_size(tree->left) +
				1 + binary_tree_size(tree->right));
}
