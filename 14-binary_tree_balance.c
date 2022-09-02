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
	return (b);
}

/**
 * _binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: return height or 0 if null
 */
int _binary_tree_height(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (max(_binary_tree_height(tree->left),
				_binary_tree_height(tree->right)) +
			1);
}

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 * Return: return balance or 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	int right, left;

	if (!tree)
		return (0);
	right = _binary_tree_height(tree->right);
	left = _binary_tree_height(tree->left);
	return (left - right);
}
