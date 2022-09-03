#include "binary_trees.h"
/**
 * _depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: return depth or 0 if null
 */
int _depth(const binary_tree_t *tree)
{

	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
/**
 * perfect - check tree is perfect
 * @tree: pointer to a tree
 * @depth: depth of the tree
 * @level: level
 * Return: 1 if perfect otherwise 0
 */
int perfect(binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (d = level + 1);

	if (!tree->left || !tree->right)
		return 0;

	return (perfect(tree->left, d, level + 1) &&
			perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - check if the binary is perfect or not
 * @tree: pointer to the root
 * Return: 1 or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;
	depth = _depth(tree);
	return (perfect(tree, depth, 0));
}