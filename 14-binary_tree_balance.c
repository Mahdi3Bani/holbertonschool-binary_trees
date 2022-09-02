#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 * Return: return balance or 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (!tree || (!tree->right && !tree->left))
		return (0);

	return (binary_tree_balance(tree->left) -
	binary_tree_balance(tree->right));
}
