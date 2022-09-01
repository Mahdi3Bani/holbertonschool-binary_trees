#include "binary_trees.h"
/**
 * max - find max
 * @a: var
 * @b: var
 * Return: max
 *
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else if (a < b)
		return (b);
	else
		return (a);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: return height or 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (max(binary_tree_height(tree->left), binary_tree_height(tree->right)));
}
