#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: return nodes or 0 if null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);
        
        
        return (0);
	
}
