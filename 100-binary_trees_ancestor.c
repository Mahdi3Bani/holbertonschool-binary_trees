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

	return (_depth(tree->parent) + 1);
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t df, ds;

	if (!second || !first)
		return (NULL);

	df = _depth(first);
	ds = _depth(second);

	while (df > ds)
	{
		first = first->parent;
		df--;
	}
	while (df < ds)
	{
		second = second->parent;
		ds--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}