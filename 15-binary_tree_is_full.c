#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to a tree
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (0);
		else
		return (1);

	return (binary_tree_is_full(tree->left));
	return (binary_tree_is_full(tree->right));
}