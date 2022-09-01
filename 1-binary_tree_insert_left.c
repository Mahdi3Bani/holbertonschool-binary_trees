#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node in the left side
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->left = parent->left;
	node->right = NULL;
	node->n = value;
	node->parent = parent;
	parent->left = node;

	if (node->left)
	{

		node->left->parent = node;
	}
	return (node);
}
