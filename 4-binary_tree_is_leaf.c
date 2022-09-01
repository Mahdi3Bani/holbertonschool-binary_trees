#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is a leaf
 * @node: node to check
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node)
		return;
	if (node->left || node->right)
		return (1);
	else
		return (0);
}
