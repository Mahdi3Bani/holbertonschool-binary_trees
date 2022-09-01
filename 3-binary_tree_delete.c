#include "binary_trees.h"
/**
 * binary_tree_delete - delete a tree
 * @tree: is a pointer to the root
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	deleteTree(tree->left);
	deleteTree(tree->right);

	free(tree);
}
